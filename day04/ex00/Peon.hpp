/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:00:45 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:00:46 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{

	public:
		Peon(void);
		Peon(std::string n);
		~Peon(void);
		Peon(const Peon& src);
		Peon& operator = (const Peon& rhs);

		void getPolymorphed(void) const;

};
#endif
