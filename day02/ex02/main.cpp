/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 16:20:08 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/04 16:20:10 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"
#include <printf.h>
#include <stdbool.h>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(1.1f);

	std::cout << c << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << (a + b) << std::endl;
	std::cout << (b - a) << std::endl;
	std::cout << (a * b) << std::endl;
	std::cout << (a / b) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	printf("The result is: %d\n", a < b);
	printf("The result is: %d\n", a > b);
	printf("The result is: %d\n", a == b);
	printf("The result is: %d\n", a != b);
	return 0;
}
