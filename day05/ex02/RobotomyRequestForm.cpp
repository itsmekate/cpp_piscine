/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:16:55 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/09 11:16:56 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

const std::string RobotomyRequestForm::_name = "RobotomyRequestForm";

RobotomyRequestForm::RobotomyRequestForm(void):Form(_name, _gradeToSign, _gradeToExecute) {
	_target ="";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(_name, _gradeToSign, _gradeToExecute)
{ this->_target = target;}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src){
	*this = src;
	return ;
} 				
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	if(this != &rhs)
	{
		this->setSigned(rhs.getSigned());
	}
	return *this;
}	

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	static int n = 0;
    if (!n)
    {
        srand(time(0));
        n++;
    }
	if (!this->getSigned())
		throw Form::GradeTooLowException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
	{
		std::cout << "* DRILLING NOISE *" << std::endl;
		if (rand() % 2 == 0)
			std::cout << _target << "has been robotomized successfully" << std::endl;
		else
			std::cout << "it’s a failure" << std::endl;		
	}
}