/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:40:26 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/10 17:40:27 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include <ctime>

class Base
{
	public:
		virtual ~Base(){}
};
class A : public Base 
{
	public:
		~A(){}
};
class B : public Base 
{
	public:
		~B(){}
};
class C : public Base 
{
	public:
		~C(){}
};


void identify_from_pointer( Base * p )
{
	if (A* a = dynamic_cast<A*> (p))
	{
		(void)a;
		std::cout << "identify_from_pointer A" << std::endl;
	}
	else if (B* b = dynamic_cast<B*> (p))
	{
		(void)b;
		std::cout << "identify_from_pointer B" << std::endl;
	}
	else if (C* cp = dynamic_cast<C*> (p))
	{
		(void)cp;
		std::cout << "identify_from_pointer C" << std::endl;
	}
}

void identify_from_reference( Base & p )
{
	try 
	{
		A& a = dynamic_cast<A&> (p);
		(void)a;
		std::cout << "identify_from_reference A" << std::endl;
	}
	catch(std::exception &e)
	{
	}
	try 
	{
		B& b = dynamic_cast<B&> (p);
		(void)b;
		std::cout << "identify_from_reference B" << std::endl;
	}
	catch(std::exception &e)
	{
	}
	try 
	{
		C& cp = dynamic_cast<C&> (p);
		(void)cp;
		std::cout << "identify_from_reference C" << std::endl;
	}
	catch(std::exception &e)
	{
	}
}

Base * generate(void)
{
	int r = rand() % 3;
	if (r % 3 == 0)
	{
		std::cout << "generated A" << std::endl;
		return (new A());
	}
	else if (r % 3 == 1)
	{
		std::cout << "generated B" << std::endl;
		return (new B());
	}
	else if (r % 3 == 2)
	{
		std::cout << "generated C" << std::endl;
		return (new C());
	}
	else
		return NULL;
}

int main()
{

	srand(time(NULL));
	identify_from_pointer(generate());
	identify_from_reference(*generate());
}
