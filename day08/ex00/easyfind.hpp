/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 11:58:59 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/12 11:59:00 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template<typename T>

int	easyfind(T &t, int b)
{
	typename T::iterator f = std::find(t.begin(), t.end(), b);
	if (f != t.end())
	   return (*f);
	else
	   return (-1);
}

#endif