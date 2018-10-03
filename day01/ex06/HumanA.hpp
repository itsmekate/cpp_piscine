/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:32:48 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/03 15:32:49 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"
#include <string>

class HumanA
{
	public:
		HumanA(std::string n);
		HumanA(std::string n, Weapon &w);
		~HumanA(void);
		void	attack(void);
		void	setWeapon(Weapon *w);

	private:
		std::string _name;
		Weapon *_weapon;
};

#endif