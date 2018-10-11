/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 13:28:06 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/11 13:28:08 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	Array<std::string, 5> array;
	// Array<sint, 5> array;
	std::cout << array.GetSize() << std::endl;

	// std::cin.get();
}