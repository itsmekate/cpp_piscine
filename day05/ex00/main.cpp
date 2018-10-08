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

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bob =  Bureaucrat("Bob", 150);
	Bureaucrat marie = Bureaucrat("Marie", 42);
	Bureaucrat alex =  Bureaucrat("Alex", 1);
	Bureaucrat mark = Bureaucrat("Mark", 12);

	std::cout << bob;
	std::cout << marie;
	std::cout << alex;
	try
	{
		std::cout << "Decreasing Bob grade" << std::endl;
		bob--;
		std::cout << bob;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Increasing Alex grade" << std::endl;
		alex++;
		std::cout << alex;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Increasing Marie grade" << std::endl;
		marie++;
		std::cout << marie;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Increasing Mark grade by 100" << std::endl;
		mark-=100;
		std::cout << mark;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Increasing Marie grade by 4" << std::endl;
		marie+=4;
		std::cout << marie;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Decreasing Marie grade" << std::endl;
		--marie;
		std::cout << marie;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Increasing Mark grade" << std::endl;
		++mark;
		std::cout << mark;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
}
