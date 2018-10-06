/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:54:36 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:54:37 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{

	public:

		SuperMutant( void);					
		SuperMutant( SuperMutant const & src); 				
		SuperMutant & operator=(SuperMutant const & rhs);	
		~SuperMutant( void );

		virtual void takeDamage(int damage);


};

std::ostream &	operator<<(std::ostream & o, SuperMutant const &i);

#endif
