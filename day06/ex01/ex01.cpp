/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 16:50:29 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/10 16:50:30 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include <string>

struct Data 
{	std::string s1;
	int n;
	std::string s2;
};

Data * deserialize( void * raw )
{
	return (reinterpret_cast<Data*>(raw));
}

void * serialize( void )
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
 	srand(time(NULL));

 	int n;
 	std::string s2 = std::string(8, '\0');
	std::string s1 = std::string(8, '\0');

 	for (int i = 0; i < 8; i++)
 	 	s1[i] = alphabet[rand() % 26]; 	
 	for (int i = 0; i < 8; i++)
 	 	s2[i] = alphabet[rand() % 26];

 	n = rand();
	Data *d = new Data;
	d->s1 = s1;
	d->s2 = s2;
	d->n = n;

	std::cout << "serialize: s1: " << d->s1 << std::endl;
	std::cout << "serialize: n: " << d->n << std::endl;
	std::cout << "serialize: s2: " << d->s2 << std::endl;

 	return (reinterpret_cast<void*>(d));
}

int main()
{
	void	*ptr;
	Data *d = new Data;
	ptr = serialize();
	std::cout << ptr << std::endl;
	d = deserialize(ptr);
	std::cout << "s1: " << d->s1 << std::endl;
	std::cout << "n: " << d->n << std::endl;
	std::cout << "s2: " << d->s2 << std::endl;
}