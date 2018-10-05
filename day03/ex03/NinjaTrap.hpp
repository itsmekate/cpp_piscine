/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:51:12 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/05 15:51:14 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{

	public:
		NinjaTrap(void);
		NinjaTrap(std::string n);
		~NinjaTrap(void);
		NinjaTrap(const NinjaTrap& src);
		NinjaTrap& operator = (const NinjaTrap& rhs);

		void	ninjaShoebox(ClapTrap ct);
		void	ninjaShoebox(FragTrap ft);
		void	ninjaShoebox(ScavTrap st);
		void	ninjaShoebox(NinjaTrap nt);

};
#endif

