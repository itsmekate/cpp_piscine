/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 13:28:14 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/10 13:28:16 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <typeinfo>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "\033[0;31mWrong number of arguments!" << std::endl;
		return 0;
	}
	else
	{
		std::string str = argv[1];
		int i = 0;
		float f = 0;
		double d = 0;
		
		try
		{
			i = static_cast<int>(std::stoi(str));
			if ( i >= 33 && i <= 126 )
				std::cout << "char: " << static_cast<char>(i) << std::endl;
			else
				std::cout << "Non displayable" << std::endl;
			std::cout << "int: " << i << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		}
		try
		{
			f = static_cast<float>(std::stof(str));
			std::cout << "float: " << std::fixed << std::setprecision(1) << f << typeid(f).name() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "float: impossible" << std::endl;
		}
		try
		{
 			d = static_cast<double>(std::stod(str));
			std::cout << "double: " << d << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "double: impossible" << std::endl;
		}
	}
}