/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:59:10 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/03 14:59:11 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <string>


class Brain
{
	private:
		std::string	_thoughts;
		std::string	_dreams;
		std::string	_knowledge;

	public:
		Brain( void );
		~Brain( void );
		std::string identify(void) const;
};

#endif
