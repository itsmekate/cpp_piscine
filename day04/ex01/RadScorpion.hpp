/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:54:54 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:54:57 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{

	public:

		RadScorpion( void);		
		RadScorpion( RadScorpion const & src); 				
		RadScorpion & operator=(RadScorpion const & rhs);	
		~RadScorpion( void );

		virtual void takeDamage(int damage);


};

std::ostream &	operator<<(std::ostream & o, RadScorpion const &i);

#endif
