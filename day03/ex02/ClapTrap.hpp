/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:24:21 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/05 15:24:23 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
	protected:
		unsigned int		_hitPoints;
		unsigned int 		_maxHitPoints;
		unsigned int 		_energyPoints;
		unsigned int 		_maxEnegryPoints;
		unsigned int		_level;
		std::string 		_name;
		unsigned int 		_melleeAttackDamage;
		unsigned int 		_rangedAttackDamage;
		unsigned int 		_armorDamageReduction;


	public:
		ClapTrap(void);
		ClapTrap(std::string n);
		~ClapTrap(void);
		ClapTrap(const ClapTrap& src);
		ClapTrap& operator = (const ClapTrap& rhs);

		void				rangedAttack(std::string const & target);
		void				meleeAttack(std::string const &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		
		void				vaulthunter_dot_exe(std::string const & target);

		unsigned int 		getHitPoints(void) const ;
		unsigned int		getMaxHitPoints(void) const ;
		unsigned int		getEnergyPoints(void) const ;
		unsigned int 		getMaxEnergyPoints(void) const ;
		unsigned int		getLevel(void) const ;
		std::string 		getName(void) const ;
		unsigned int		getMelleeAttackDamage(void) const ;
		unsigned int 		getRangedAttackDamage(void) const ;
		unsigned int		getArmorDamageReduction(void) const ;

		void				setHitPoints(int amount);
		void				setMaxHitPoints(int amount);
		void				setEnergyPoints(int amount);
		void				setMaxEnergyPoints(int amount);
		void				setLevel(int amount);
		void				setName(std::string n);
		void				setMelleeAttackDamage(int amount);
		void				setrRangedAttackDamage(int amount);
		void				setArmorDamageReduction(int amount);

};
#endif

