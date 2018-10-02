/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:04:22 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/02 18:04:23 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main( void )
{
	Pony	*carter = new Pony ("Carter", 12); //pony number 1 on heap
	Pony	margaret = Pony("Margaret", 5); // pony nuber 2 on stack

	delete carter;

	return (0);
}
