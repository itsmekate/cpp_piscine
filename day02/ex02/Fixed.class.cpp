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

Fixed::Fixed( void ){
	_n = 0;
	return ;
}
Fixed::Fixed( const int n )
{
	_n = n << _bits;
	return ;
}
Fixed::Fixed( const float n )
{
	_n = roundf(n * (1 << _bits));
	return ;
}
Fixed::~Fixed( void ){ return ;}
Fixed::Fixed( Fixed const & src)
{
	*this = src;
	return ;
}
Fixed & Fixed::operator=(Fixed const & rhs)
{
	if(this != &rhs)
		_n = rhs.getRawBits();
	return *this;
}
//
// COMPARISON OPERATORS OVERLOAD PART
//
bool Fixed::operator>(Fixed const & rhs) { return (toFloat() > rhs.toFloat()); }
bool Fixed::operator<(Fixed const & rhs) { return (toFloat() < rhs.toFloat()); }
bool Fixed::operator>=(Fixed const & rhs) { return (toFloat() >= rhs.toFloat()); }
bool Fixed::operator<=(Fixed const & rhs) { return (toFloat() <= rhs.toFloat()); }
bool Fixed::operator==(Fixed const & rhs) { return (toFloat() == rhs.toFloat()); }
bool Fixed::operator!=(Fixed const & rhs) { return (toFloat() != rhs.toFloat()); }
//
//	ARITHMETIC OPERATORS OVERLOAD PART
//
Fixed Fixed::operator+(Fixed const & rhs) { return Fixed(this->toFloat() + rhs.toFloat()); }
Fixed Fixed::operator-(Fixed const & rhs) { return Fixed(this->toFloat() - rhs.toFloat()); }
Fixed Fixed::operator*(Fixed const & rhs) { return Fixed(this->toFloat() * rhs.toFloat()); }
Fixed Fixed::operator/(Fixed const & rhs) { return Fixed(this->toFloat() / rhs.toFloat()); }

Fixed & Fixed::operator++(void){
	_n++;
	return *this;
}
Fixed 	Fixed::operator++(int){
	Fixed res;

	res = *this;
	++_n;
	return res;
}
Fixed &	Fixed::operator--(void){
	_n--;
	return *this;
}
Fixed 	Fixed::operator--(int){
	Fixed res;

	res = *this;
	--_n;
	return res;
}

int Fixed::getRawBits( void ) const{ return _n;}
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

Fixed & Fixed::max(Fixed & a, Fixed & b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed & Fixed::min(Fixed & a, Fixed & b){
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

const Fixed & Fixed::max(Fixed const & a, Fixed const & b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed & Fixed::min(Fixed const & a, Fixed const & b){
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

