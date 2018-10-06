/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:54:27 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:54:28 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
#include <string>
#include <iostream>

class Enemy
{
	protected:
		int			_hp;
		std::string	_type;

	public:

		Enemy( void);
		Enemy(int hp, std::string const & type);			
		Enemy( Enemy const & src); 				
		Enemy & operator=(Enemy const & rhs);	
		// ~Enemy( void );
		virtual ~Enemy( void );
		// std::string [...] getType() const;
		std::string getType() const;
		int 		getHP() const;

		void		setHP(int hp);

		virtual void takeDamage(int damage);

};

std::ostream &	operator<<(std::ostream & o, Enemy const &i);

#endif
