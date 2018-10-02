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

#include <string>
#include "Zombie.hpp"

class ZombieEvent {

	public:
		std::string event;

		ZombieEvent( void );
		~ZombieEvent( void );

		void	setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		Zombie	randomChump( void );
};
