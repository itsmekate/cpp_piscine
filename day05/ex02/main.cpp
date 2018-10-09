/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:58:38 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/08 14:58:39 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

int main()
{
	Bureaucrat bob =  Bureaucrat("Bob", 150);
	Bureaucrat marie = Bureaucrat("Marie", 42);
	Bureaucrat alex =  Bureaucrat("Alex", 1);
	Bureaucrat mark = Bureaucrat("Mark", 12);

	ShrubberyCreationForm scf = ShrubberyCreationForm("Earth");
	RobotomyRequestForm rrf = RobotomyRequestForm("Mars");
	PresidentialPardonForm ppf = PresidentialPardonForm("Julia");

	std::cout << bob;
	std::cout << marie;
	std::cout << alex;
	std::cout << mark;
	try
	{
		std::cout << "Asking Mark to sign" << std::endl;
		scf.beSigned(mark);
		mark.signForm(scf);
		std::cout << scf;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Asking Marie to execute" << std::endl;
		marie.executeForm(scf);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Asking Marie to sign" << std::endl;
		rrf.beSigned(marie);
		marie.signForm(rrf);
		std::cout << rrf;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Asking Marie to execute" << std::endl;
		marie.executeForm(rrf);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Asking Mark to execute" << std::endl;
		mark.executeForm(rrf);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Asking bob to execute" << std::endl;
		bob.executeForm(rrf);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Asking Alex to sign" << std::endl;
		ppf.beSigned(alex);
		alex.signForm(ppf);
		std::cout << ppf;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Asking Alex to execute" << std::endl;
		alex.executeForm(ppf);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Asking bob to execute" << std::endl;
		bob.executeForm(rrf);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
}
