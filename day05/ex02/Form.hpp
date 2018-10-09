/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 20:58:57 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/08 20:58:58 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include "Header.hpp"

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;

	public:
		Form(void);
		Form(std::string const name, int const _gradeToSign, int const _gradeToExecute);
		virtual ~Form() = 0;

		Form( Form const & src); 				
		Form & operator=(Form const & rhs);	

		std::string	getName() const;
		bool		getSigned() const;
		void		setSigned(bool b);
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void		beSigned(Bureaucrat &b);
		virtual void		execute(Bureaucrat const & executor) const = 0;

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

};

std::ostream &	operator<<(std::ostream & o, Form const &f);

#endif
