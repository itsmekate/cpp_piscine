/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 12:41:26 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/04 12:41:28 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int n )
{
	_n = n;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	_n = src.getRawBits();
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &rhs)
		_n = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" <<std::endl;
	return _n;
}

void Fixed::setRawBits( int const raw)
{
	_n = raw;
	std::cout << "setRawBits member function called" << std::endl;
	return ;
}