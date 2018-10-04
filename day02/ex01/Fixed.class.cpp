/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:35:57 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/04 15:35:59 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.class.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed( void )
{
	_n = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int n )
{
	std::cout << "Int constructor called" << std::endl;
	_n = n << _bits;
	return ;
}

Fixed::Fixed( const float n )
{
	std::cout << "Float constructor called" << std::endl;
	_n = roundf(n * (1 << _bits));
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
	*this = src;
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
	return _n;
}

void Fixed::setRawBits( int const raw)
{
	_n = raw;
	std::cout << "setRawBits member function called" << std::endl;
	return ;
}

float	Fixed::toFloat( void ) const
{
	float res;
	res = _n / (float)(1 << _bits);
	return res;
}

int 	Fixed::toInt( void ) const 
{
	int res;
	res = _n >> _bits;
	return res;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();

	return (o);
}