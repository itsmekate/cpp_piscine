/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:29:05 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/04 20:29:06 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:
		ScavTrap(void);
		ScavTrap(std::string n);
		~ScavTrap(void);
		ScavTrap(const ScavTrap& src);
		ScavTrap& operator=(const ScavTrap& rhs);

		void 		challengeNewcomer(std::string const & target);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const &target);
};
#endif
