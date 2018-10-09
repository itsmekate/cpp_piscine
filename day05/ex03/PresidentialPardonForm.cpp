/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:17:09 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/09 11:17:10 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

const std::string PresidentialPardonForm::_name = "PresidentialPardonForm";

PresidentialPardonForm::PresidentialPardonForm(void):Form(_name, _gradeToSign, _gradeToExecute){
	_target = "";
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(_name, _gradeToSign, _gradeToExecute)
 { this->_target = target;}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src){
	*this = src;
	return ;
} 				
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	if(this != &rhs)
	{
		this->setSigned(rhs.getSigned());
	}
	return *this;
}	

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw Form::GradeTooLowException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}