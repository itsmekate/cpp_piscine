/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:11:53 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/10 21:11:54 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void	iter(T *array, int length, void function(T a))
{
	for (int i = 0; i < length; ++i)
	{
		function(array[i]);
	}
}

template <typename T>
void	print_out(T a)
{
	std::cout << a << std::endl;
}

int main()
{
	int arr1[5] = {0, 1, 2, 3, 4};
	char arr2[5] = {'a', 'b', 'c', 'd', 'e'};

	iter(arr1, 5, print_out);
	iter(arr2, 5, print_out);
}


