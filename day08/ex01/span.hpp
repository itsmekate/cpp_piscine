/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 13:21:14 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/12 13:21:16 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP 
# define SPAN_HPP 
#include <vector>
class Span
{
	private:
		unsigned int _N;
		std::vector<int> _array;


	public:
		Span();
		Span(unsigned int n);
		Span(Span const &rhs);
		Span & operator=(Span const &rhs);
		~Span();

		void addNumber(int i);
		int shortestSpan();
		int longestSpan();

		class NoSpanException: public std::exception
		{
			public:
				NoSpanException();
				NoSpanException(NoSpanException const &rhs);
				NoSpanException & operator=(NoSpanException const &rhs);
				virtual ~NoSpanException() throw();
				virtual const char *what() const throw();
		};
};

#endif
