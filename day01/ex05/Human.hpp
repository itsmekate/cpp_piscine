/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:58:59 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/03 14:59:00 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>
#include <string>

class Human
{
	private:
		Brain const brain;


	public:
		Human( void );
		~Human( void );
		std::string identify( void );
		Brain const & getBrain( void );
};

#endif

