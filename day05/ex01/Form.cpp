/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 20:58:50 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/08 20:58:51 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

Form::Form(void) : _name("default"), _signed(0), _gradeToSign(0), _gradeToExecute(0){

}
Form::Form(std::string const name, bool sign, int const gradeToSign, int const gradeToExecute)
 : _name(name), _signed(sign), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
 {
	if (gradeToSign < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150)
		throw GradeTooLowException();
}

Form::~Form() {}

Form::Form( Form const & src):
_name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {
	*this = src;
	return ;
} 				
Form & Form::operator=(Form const & rhs) {
	if(this != &rhs)
	{
		_signed = rhs.getSigned();
	}
	return *this;
}	

std::string	Form::getName() const 
{
	return _name;
}

bool				Form::getSigned() const 
{
	return _signed;
}

int			Form::getGradeToSign() const 
{
	return _gradeToSign;
}

int			Form::getGradeToExecute() const 
{
	return _gradeToExecute;
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_signed = 1;
}

std::ostream &	operator<<(std::ostream & o, Form const &f)
{
	o << "Form " << f.getName() << " has status " << f.getSigned();
	o << " at getting signature, it needs grade " << f.getGradeToSign();
	o << " to be signed and grade " << f.getGradeToExecute() << " to execute." <<std::endl;
	return o;
}

//
// GRADE_TOO_HIGH_EXCEPTION_CLASS
//
Form::GradeTooHighException::GradeTooHighException( void ){}
Form::GradeTooHighException::~GradeTooHighException( void ) throw(){}

Form::GradeTooHighException::GradeTooHighException( GradeTooHighException const & src)
{
	*this = src;
	return ;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

Form::GradeTooHighException 
& Form::GradeTooHighException::operator=(GradeTooHighException const & rhs){
	if (this != &rhs)
	return *this;
return *this;
}
//
// GRADE_TOO_LOW_EXCEPTION_CLASS
//
Form::GradeTooLowException::GradeTooLowException( void ){}
Form::GradeTooLowException::~GradeTooLowException( void ) throw(){}

Form::GradeTooLowException::GradeTooLowException( GradeTooLowException const & src)
{
	*this = src;
	return ;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

Form::GradeTooLowException 
& Form::GradeTooLowException::operator=(GradeTooLowException const & rhs){
	if (this != &rhs)
		return *this;
	return *this;
}
//
//
//