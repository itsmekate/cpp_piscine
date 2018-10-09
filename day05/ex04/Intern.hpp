/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:01:16 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/09 15:01:17 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Header.hpp"

class Intern
{
	public:
		Intern();
		~Intern();

		Intern( Intern const & src); 				
		Intern & operator=(Intern const & rhs);

		Form* makeForm(std::string formName, std::string formTarget);

		class FormDoesntExistException : public std::exception
		{
			public:
				FormDoesntExistException( void);					
				FormDoesntExistException( FormDoesntExistException const & src); 				
				FormDoesntExistException & operator=(FormDoesntExistException const & rhs);	
				~FormDoesntExistException( void ) throw();
				const char *what() const throw();
		};
};

#endif