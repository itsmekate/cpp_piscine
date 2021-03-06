/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:49:32 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/02 18:49:34 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent {

	private:
		std::string _ZombieType;

	public:

		ZombieEvent( void );
		~ZombieEvent( void );

		void	setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void	randomChump( void );
};


#endif