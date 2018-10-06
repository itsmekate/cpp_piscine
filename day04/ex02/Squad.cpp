/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:29:34 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 16:29:35 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void )
{
	_list = NULL;
	_num = 0;
}

Squad::Squad( Squad const & src)
{
	t_list	*l1;
	t_list	*l2;

	l1 = _list;
	l2 = src._list;
	_list = NULL;
	while (l2)
	{
		if (_list == NULL)
		{
			_list = new(t_list);
			_list->data = l2->data;
			_list->next = NULL;
		}
		else
		{
			l1 = _list;
			while (l1->next)
				l1 = l1->next;
			l1->next = new(t_list);
			l1->next->data = l2->data;
			l1->next->next = NULL;
		}
	}
	_num = src._num;
}

Squad::~Squad( void )
{
	t_list *tmp;

	while (_list)
	{
		tmp = _list;
		delete _list->data;
		_list = _list->next;
		delete tmp;
	}
}

Squad & Squad::operator=(Squad const & rhs)
{
	if(this != &rhs)
	{
		t_list	*tmp;
		t_list	*tmp2;

		tmp = _list;
		while (tmp)
			delete tmp->data;


		tmp = _list;
		tmp2 = rhs._list;
		_list = NULL;
		while (tmp2)
		{
			if (_list == NULL)
			{
				_list = new(t_list);
				_list->data = tmp2->data;
				_list->next = NULL;
			}
			else
			{
				tmp = _list;
				while (tmp->next)
					tmp = tmp->next;
				tmp->next = new(t_list);
				tmp->next->data = tmp2->data;
				tmp->next->next = NULL;
			}
			tmp2 = tmp2->next;
			_num = rhs._num;
		}
   		return *this;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Squad const & i)
{
	o << i.getCount();
	return o;
}

int 			Squad::getCount(void) const {return _num;};

ISpaceMarine* 	Squad::getUnit(int i) const 
{
	t_list *tmp;

	tmp = _list;
	while ( i != 0 && tmp)
	{
		tmp = tmp->next;
		i--;
	}
	return (tmp->data);
}

int 			Squad::push(ISpaceMarine* marine)
{
	t_list *tmp;

	if (marine == NULL)
		return (_num);
	if (_list == NULL)
	{
		_list = new(t_list);
		_list->data = marine;
		_list->next = NULL;
	}
	else
	{
		tmp = _list;
		while (tmp->next)
		{
			if (tmp->data == marine)
				return (_num);
			tmp = tmp->next;
		}
		tmp->next = new(t_list);
		tmp->next->data = marine;
		tmp->next->next = NULL;
	}
	_num++;
	return (_num);
}