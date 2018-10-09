/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:55:29 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/09 15:55:30 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Header.hpp"

class OfficeBlock
{
	public:
		class NoInternException : public std::exception
		{
			public:
				NoInternException( void);				
				NoInternException( NoInternException const & src); 				
				NoInternException & operator=(NoInternException const & rhs);	
				~NoInternException( void ) throw();
				const char *what() const throw();
		};
	
		class NoSignBureaucratException : public std::exception
		{
			public:
				NoSignBureaucratException( void);					
				NoSignBureaucratException( NoSignBureaucratException const & src); 				
				NoSignBureaucratException & operator=(NoSignBureaucratException const & rhs);	
				~NoSignBureaucratException( void ) throw();
				const char *what() const throw();
				
		};

		class NoExecBureaucratException : public std::exception
		{
			public:
				NoExecBureaucratException( void);					
				NoExecBureaucratException( NoExecBureaucratException const & src); 				
				NoExecBureaucratException & operator=(NoExecBureaucratException const & rhs);	
				~NoExecBureaucratException( void ) throw();
				const char *what() const throw();
				
		};


		OfficeBlock();
		OfficeBlock(Intern *i, Bureaucrat *signB, Bureaucrat *execB);
		~OfficeBlock();

		void	setSignB(Bureaucrat 	*signB);
		void	setExecB(Bureaucrat 	*execB);
		void	setIntern(Intern 		*i);

		void	doBureaucracy(std::string formName, std::string targetName);

	private:
		Bureaucrat 	*_signB;
		Bureaucrat 	*_execB;
		Intern		*_i;
};

#endif
