/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 12:41:22 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/04 12:41:23 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed 
{

	public:

		Fixed( void);
		Fixed( const int n ); 					
		Fixed( Fixed const & src); 				
		Fixed & operator=(Fixed const & rhs);	
		~Fixed( void ); 						

		int	getRawBits( void ) const;
		void setRawBits( int const raw);
	
	private:
		int	_n;
		static const int	_bits;

};

std::ostream &	operator<<(std::ostream & o, Fixed const &i);

#endif
