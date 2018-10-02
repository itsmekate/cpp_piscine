/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:04:15 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/02 18:04:16 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_H
# define PONY_CLASS_H
#include <iostream>
#include <string>

class Pony {

	public:
		std::string		name;
		int				age;
		std::string		breed;

		Pony( std::string pony_name, int age);
		~Pony( void );
	
		void sound( void );
};

#endif