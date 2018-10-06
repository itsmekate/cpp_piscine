/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:00:04 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:00:09 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
#include <string>
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string _name;
		std::string	_title;

	public:
		Sorcerer(void);
		Sorcerer(std::string n, std::string t);
		~Sorcerer(void);
		Sorcerer(const Sorcerer& src);
		Sorcerer& operator = (const Sorcerer& rhs);

		std::string getName(void) const;
		std::string getTitle(void) const;

		void polymorph(Victim const &) const;
};

std::ostream &	operator<<(std::ostream & o, Sorcerer const &i);

#endif

