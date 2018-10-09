/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:01:10 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/09 15:01:13 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

Intern::Intern(){}
Intern::~Intern(){}

Intern::Intern( Intern const & src)
{
	*this = src;
	return ;
}
Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

Form* Intern::makeForm(std::string formName, std::string formTarget)
{
	if (formName == "robotomy request")
	{
		std::cout << "Intern creates " << formName << std::endl;
		return (new RobotomyRequestForm(formTarget));
	}
	else if (formName == "shrubbery creation")
	{
		std::cout << "Intern creates " << formName << std::endl;
		return (new ShrubberyCreationForm(formTarget));
	}
	else if (formName == "presidential pardon")
	{
		std::cout << "Intern creates " << formName << std::endl;
		return (new PresidentialPardonForm(formTarget));
	}
	else
		throw FormDoesntExistException();
}

Intern::FormDoesntExistException::FormDoesntExistException( void ){}
Intern::FormDoesntExistException::~FormDoesntExistException( void ) throw(){}

Intern::FormDoesntExistException::FormDoesntExistException( FormDoesntExistException const & src)
{
	*this = src;
	return ;
}

const char *Intern::FormDoesntExistException::what() const throw()
{
	return "Form doest exist!";
}

Intern::FormDoesntExistException 
& Intern::FormDoesntExistException::operator=(FormDoesntExistException const & rhs){
	if (this != &rhs)
	return *this;
return *this;
}