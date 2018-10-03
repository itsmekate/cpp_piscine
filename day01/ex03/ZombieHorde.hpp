/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:27:44 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/03 14:27:45 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	private:
		int		_hordeSize;
		Zombie*	_ZombieHordePtr;

	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void	announce( void );
};

#endif