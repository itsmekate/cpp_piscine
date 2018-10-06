/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:54:21 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:54:22 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void ){}

Enemy::Enemy(int hp, std::string const & type)
{
	_hp = hp;
	_type = type;
	return ;
}

Enemy::~Enemy( void ){}

Enemy::Enemy( Enemy const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		_hp = rhs.getHP();
		_type = rhs.getType();
	}
	return *this;
}

std::string	Enemy::getType(void) const {return _type;};
int			Enemy::getHP(void) const {return _hp;};

void Enemy::takeDamage(int damage)
{
	if (_hp > damage)
		_hp -= damage;
}

std::ostream & operator<<(std::ostream & o, Enemy const & i)
{
	o << i.getType();
	return (o);
}

void		Enemy::setHP(int hp)
{
	_hp = hp;
}