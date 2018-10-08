/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:42:09 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/05 18:42:14 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	
	public:
		SuperTrap(void);
		SuperTrap(std::string n);
		~SuperTrap(void);
		SuperTrap(const SuperTrap& src);
		SuperTrap& operator = (const SuperTrap& rhs);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const &target);

};
#endif

