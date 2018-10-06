/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:00:22 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:00:23 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
#include <string>

class Victim
{
	protected:
		std::string _name;

	public:
		Victim(void);
		Victim(std::string n);
		~Victim(void);
		Victim(const Victim& src);
		Victim& operator = (const Victim& rhs);

		std::string getName(void) const;

		void getPolymorphed(void) const;

};

std::ostream &	operator<<(std::ostream & o, Victim const &i);

#endif

