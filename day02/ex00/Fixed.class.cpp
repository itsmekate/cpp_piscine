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

const int	Fixed::_bits = 8;

Fixed::Fixed( void )
{
	_n = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int n )
{
	_n = n;
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
	std::cout << "getRawBits member function called" <<std::endl;
	return _n;
}

void Fixed::setRawBits( int const raw)
{
	_n = raw;
	std::cout << "setRawBits member function called" << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.getRawBits();

	return (o);
}