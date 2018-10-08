/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:58:26 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/08 14:58:28 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default")
{
	_grade = 150;
	return ;
}

Bureaucrat::Bureaucrat( std::string const name, int grade ) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else 
		this->_grade = grade;
	return ;
}

Bureaucrat::~Bureaucrat( void ){}

Bureaucrat::Bureaucrat( Bureaucrat const & src)
{
	*this = src;
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if(this != &rhs)
	{
		_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (o);
}

std::string Bureaucrat::getName(void) const { return _name; }
int			Bureaucrat::getGrade(void) const { return _grade; }

void		Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}
//
// GRADE_TOO_HIGH_EXCEPTION_CLASS
//
Bureaucrat::GradeTooHighException::GradeTooHighException( void ){}
Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw(){}

Bureaucrat::GradeTooHighException::GradeTooHighException( GradeTooHighException const & src)
{
	*this = src;
	return ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Maximum grade reached already";
}

Bureaucrat::GradeTooHighException 
& Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs){
	if (this != &rhs)
	return *this;
return *this;
}
//
// GRADE_TOO_LOW_EXCEPTION_CLASS
//
Bureaucrat::GradeTooLowException::GradeTooLowException( void ){}
Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw(){}

Bureaucrat::GradeTooLowException::GradeTooLowException( GradeTooLowException const & src)
{
	*this = src;
	return ;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Minimum grade reached already";
}

Bureaucrat::GradeTooLowException 
& Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs){
	if (this != &rhs)
		return *this;
	return *this;
}
//
//
//
Bureaucrat & Bureaucrat::operator++(void)
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
	return (*this);
}

Bureaucrat & Bureaucrat::operator--(void)
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int)
{
	Bureaucrat b = *this;
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
	return (b);
}

Bureaucrat Bureaucrat::operator++(int)
{
	Bureaucrat b = *this;
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
	return (b);
}

void Bureaucrat::operator+=(int i)
{
	if(_grade - i < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= i;
}

void Bureaucrat::operator-=(int i)
{
	if(_grade + i > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += i;
}
