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
		Fixed( int n ); 							//Canonical
		Fixed( Fixed const & src); 				//copy constructor
		Fixed & operator=(Fixed const & rhs);	//assignment operator
		~Fixed( void ); 						//Canonical

		int	getRawBits( void ) const;
		void setRawBits( int const raw);
	
	private:
		int	_n;
		static const int	_bits = 8;

};

// std::ostream &	operator<<(std::ostream & o, Sample const &i);

#endif
