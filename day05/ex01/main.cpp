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

	Form contract = Form("contract", 0, 15, 15);

	std::cout << bob;
	std::cout << marie;
	std::cout << alex;
	try
	{
		std::cout << "Asking Alex to sign" << std::endl;
		contract.beSigned(alex);
		alex.signForm(contract);
		std::cout << contract;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Asking Bob to sign" << std::endl;
		contract.beSigned(bob);
		std::cout << contract;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
}
