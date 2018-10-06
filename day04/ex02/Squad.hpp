/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:29:38 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 16:29:40 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	typedef struct s_list
	{
		ISpaceMarine	*data;
		s_list			*next;
	}				t_list;

	public:

		Squad( void);
		Squad( const int n ); 					
		Squad( Squad const & src); 				
		Squad & operator=(Squad const & rhs);	
		~Squad( void );

		int 			getCount() const;
		ISpaceMarine* 	getUnit(int i) const;
		int 			push(ISpaceMarine* marine);		

	private:

		int	_num;
		t_list	*_list;



};

std::ostream &	operator<<(std::ostream & o, Squad const &i);

#endif