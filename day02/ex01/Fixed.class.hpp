/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:36:04 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/04 15:36:05 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed 
{

	public:

		Fixed( void );
		Fixed( const int n ); 	
		Fixed( const float n ); 					
		Fixed( Fixed const & src); 				
		Fixed & operator=(Fixed const & rhs);	
		~Fixed( void ); 						

		int	getRawBits( void ) const;
		void setRawBits( int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
	
	private:
		int	_n;
		static const int	_bits;

};

std::ostream &	operator<<(std::ostream & o, Fixed const &i);

#endif