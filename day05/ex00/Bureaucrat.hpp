/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:58:21 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/08 14:58:23 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat 
{
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException( void);				
				GradeTooHighException( GradeTooHighException const & src); 				
				GradeTooHighException & operator=(GradeTooHighException const & rhs);	
				~GradeTooHighException( void ) throw();
				const char *what() const throw();
		};
	
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException( void);					
				GradeTooLowException( GradeTooLowException const & src); 				
				GradeTooLowException & operator=(GradeTooLowException const & rhs);	
				~GradeTooLowException( void ) throw();
				const char *what() const throw();
				
		};
	
		Bureaucrat( void);
		Bureaucrat( std::string name, int grade ); 					
		Bureaucrat( Bureaucrat const & src); 				
		Bureaucrat & operator=(Bureaucrat const & rhs);	
		~Bureaucrat( void );
		
	
		void		setGrade(int grade);
		std::string getName(void) const;
		int			getGrade(void) const;
	
		Bureaucrat & operator++(void);
		Bureaucrat  operator++(int);
		Bureaucrat & operator--(void);
		Bureaucrat  operator--(int);
		void 		operator+=(int i);
		void 		operator-=(int i);
	
	private:
		std::string const _name;
		int			_grade;

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const &b);

#endif