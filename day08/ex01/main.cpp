/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 13:21:20 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/12 13:21:21 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <numeric>
#include <ctime>

int main()
{
	srand( time( 0 ) );
	try
	{
		Span sp = Span(10000);
		for (int i = 0; i < 10000; ++i)
			sp.addNumber(rand() % 10);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Ooops... Something went wrong!" << std::endl;
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp1 = Span(5);
		sp1.addNumber(5);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);

		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Ooops... Something went wrong!" << std::endl;
		std::cout << e.what() << std::endl;
	}
}