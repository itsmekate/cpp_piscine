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
	Array<int> a1(7);
	Array<double> a2(7);
	Array<float> a3(7);
	Array<float> a4(7);
	double d = 1.5;
	float f = 2.03;

	std::cout << "CREATING INT ARRAY...." << std::endl;
	for (int i = 0; i < 7; ++i)
		a1[i] = i;
	std::cout << "CREATING DOUBLE ARRAY...." << std::endl;
	for (int i = 0; i < 7; ++i)
		a2[i] = d;
	std::cout << "CREATING FLOAT ARRAY..." << std::endl;
	for (int i = 0; i < 7; ++i)
		a3[i] = f;
	std::cout << "\033[0;32mPRINTING INT ARRAY\033[0m" << std::endl;
	for (int i = 0; i < 7; ++i)
		std::cout << a1[i] << std::endl;
	std::cout << "\033[0;32mPRINTING DOUBLE ARRAY\033[0m" << std::endl;
	for (int i = 0; i < 7; ++i)
		std::cout << a2[i] << std::endl;
	std::cout << "\033[0;32mPRINTING FLOAT ARRAY\033[0m" << std::endl;
	for (int i = 0; i < 7; ++i)
		std::cout << a3[i] << "f" << std::endl;
	std::cout << "CREATING FLOAT ARRAY WITH EXCEPTION" << std::endl;
	try
	{
		for (int i = 0; i < 8 + 1; ++i)
			a4[i] = f;
	}
	catch(std::exception &e)
	{
		std::cout << "out of range exception" << std::endl;
	}
}