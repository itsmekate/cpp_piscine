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
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat jim = Bureaucrat("Jimmy Jimson", 1);
	Bureaucrat alice = Bureaucrat("Alice Alison", 5);
	OfficeBlock ob;
	OfficeBlock ob1;
	OfficeBlock ob2;

	std::cout << jim;
	ob.setIntern(&idiotOne);
	ob.setSignB(&bob);
	ob.setExecB(&hermes);

	ob1.setIntern(&idiotOne);
	ob1.setSignB(&bob);

	ob2.setIntern(&idiotOne);
	ob2.setSignB(&jim);
	ob2.setExecB(&alice);
	try
	{
		ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch (Intern::FormDoesntExistException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		ob1.doBureaucracy("shrubbery creation", "Earth");
	}
	catch (Intern::FormDoesntExistException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		ob2.doBureaucracy("shrubbery creation", "Earth");
	}
	catch (Intern::FormDoesntExistException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
