/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 13:21:10 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/12 13:21:11 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>
#include <algorithm>

Span::Span(): _N(0)
{
	_array.reserve(_N);
}
Span::Span(unsigned int n)
{
	_N = n;
	_array.reserve(_N);
}
Span::Span(Span const &rhs)
{
	*this = rhs;
}
Span & Span::operator=(Span const &rhs)
{
	if(this != &rhs)
	{
		_array = rhs._array;
		_N = rhs._N;
	}
	return *this;
}
Span::~Span(){}

void Span::addNumber(int i)
{
	if(_array.size() < _N)
	{
		_array.push_back(i);
	}
	else
		throw NoSpanException();
}
int Span::shortestSpan()
{
	std::vector<int> tmp = _array;
	std::sort(tmp.begin(), tmp.end());
	int	shortestSpan = (int)tmp.size();
	for (int i = 0; i < (int)tmp.size() - 1; ++i)
	{
		if ((tmp[i + 1] - tmp[i]) < shortestSpan)
			shortestSpan = tmp[i + 1] - tmp[i];
	}
	return (shortestSpan);
}

int Span::longestSpan()
{
	std::vector<int>::iterator min = std::min_element(_array.begin(), _array.end());
	std::vector<int>::iterator max = std::max_element(_array.begin(), _array.end());
	int res = *max - *min;
	return (res);
}

Span::NoSpanException::NoSpanException(){}
Span::NoSpanException::NoSpanException(NoSpanException const &rhs){*this = rhs;}
Span::NoSpanException &Span::NoSpanException::operator=(const Span::NoSpanException &rhs)
{
	(void)rhs;
	return (*this);
}
Span::NoSpanException::~NoSpanException() throw() {}

const char *Span::NoSpanException::what() const throw()
{
	return "No Span";
}