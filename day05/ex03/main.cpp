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
	Intern someRandomIntern;
	Form* rrf;
	Form* swear;

	try 
	{
		
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch (Intern::FormDoesntExistException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		
		swear = someRandomIntern.makeForm("swear permission", "Bender");
	}
	catch (Intern::FormDoesntExistException e)
	{
		std::cout << e.what() << std::endl;
	}
}
