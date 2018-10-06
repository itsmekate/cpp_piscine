/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:30:07 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 16:30:08 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public:

		AssaultTerminator( void);					
		AssaultTerminator( AssaultTerminator const & src); 				
		AssaultTerminator & operator=(AssaultTerminator const & rhs);	
		~AssaultTerminator( void );

		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;

		ISpaceMarine* clone() const;
};

#endif
