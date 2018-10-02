/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 19:17:41 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/02 19:17:42 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void ){

	std::string str = "HI THIS IS BRAIN";

	std::string*	ptrStr = &str;
	std::string&	refStr = str;

	std::cout << *ptrStr << std::endl;
	std::cout << refStr << std::endl;
	return (0);
}
