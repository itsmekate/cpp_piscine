/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:29:05 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/04 20:29:06 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

	public:
		FragTrap(void);
		FragTrap(std::string n);
		~FragTrap(void);
		FragTrap(const FragTrap& src);
		FragTrap& operator = (const FragTrap& rhs);

		void		vaulthunter_dot_exe(std::string const & target);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const &target);

};
#endif
