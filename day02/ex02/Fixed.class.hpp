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
		~Fixed( void );
		Fixed & 				operator=(Fixed const & rhs);

		bool 					operator>(Fixed const & rhs);
		bool 					operator<(Fixed const & rhs);
		bool 					operator>=(Fixed const & rhs);
		bool 					operator<=(Fixed const & rhs);
		bool 					operator==(Fixed const & rhs);	
		bool 					operator!=(Fixed const & rhs);

		Fixed 	 				operator+(Fixed const & rhs);
		Fixed 	 				operator-(Fixed const & rhs);
		Fixed 	 				operator*(Fixed const & rhs);	
		Fixed 	 				operator/(Fixed const & rhs);
		
		Fixed & 				operator++(void);
		Fixed 					operator++(int);
		Fixed &					operator--(void);
		Fixed 					operator--(int);
		
		static Fixed &			max(Fixed & a, Fixed & b);
		static Fixed &			min(Fixed & a, Fixed & b);
		static const Fixed &	min(Fixed const & a, Fixed const & b);
		static const Fixed &	max(Fixed const & a, Fixed const & b);

		int						getRawBits( void ) const;
		void 					setRawBits( int const raw);
		float 					toFloat( void ) const;
		int 					toInt( void ) const;
	
	private:
		int	_n;
		static const int		_bits;

};

std::ostream &					operator<<(std::ostream & o, Fixed const &i);

#endif