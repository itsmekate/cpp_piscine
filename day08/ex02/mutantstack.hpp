/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:52:54 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/12 16:52:57 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template<typename T>
class MutantStack : std::stack<T, Container>
{
	public:
		MutantStack();
		MutantStack(MutantStack &rhs);
		MutantStack const & MutantStack(MutantStack &rhs);
		~MutantStack();

		begin(){}
		end(){}
}

#endif