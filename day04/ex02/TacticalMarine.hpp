/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:29:50 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 16:29:51 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

	public:

		TacticalMarine( void);
		TacticalMarine( const int n ); 					
		TacticalMarine( TacticalMarine const & src); 				
		TacticalMarine & operator=(TacticalMarine const & rhs);	
		~TacticalMarine( void ); 						

		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;

		ISpaceMarine* clone() const;
};

#endif
