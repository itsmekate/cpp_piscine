/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:55:24 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/09 15:55:25 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"


OfficeBlock::OfficeBlock(){}

OfficeBlock::OfficeBlock(Intern *i, Bureaucrat *signB, Bureaucrat *execB)
{
		_signB = signB;
		_execB = execB;
		_i = i;
}

OfficeBlock::~OfficeBlock(){}

void	OfficeBlock::setSignB(Bureaucrat 	*signB){ _signB = signB; }
void	OfficeBlock::setExecB(Bureaucrat 	*execB) { _execB = execB; }
void	OfficeBlock::setIntern(Intern 		*i){ _i = i; }


void	OfficeBlock::doBureaucracy(std::string formName, std::string targetName)
{
	if (!_i)
		throw  NoInternException();
	else if (!_signB)
		throw NoSignBureaucratException();
	else if (!_execB)
		throw NoExecBureaucratException();
	else
	{

		try {
            Form *f = _i->makeForm(formName, targetName);
            std::cout << *f;
            _signB->signForm(*f);
            std::cout << *f;
			_execB->executeForm(*f);
        }
        catch (Intern::FormDoesntExistException &e) {
            throw Intern::FormDoesntExistException(e);
        }
        catch (Form::GradeTooLowException &e) {
            throw Form::GradeTooLowException(e);
        }
        catch (Form::GradeTooHighException &e) {
            throw Form::GradeTooHighException(e);
        }
	}
}

//
// NO_INTERN_EXCEPTION
//
OfficeBlock::NoInternException::NoInternException( void ){}
OfficeBlock::NoInternException::~NoInternException( void ) throw(){}

OfficeBlock::NoInternException::NoInternException( NoInternException const & src)
{
	*this = src;
	return ;
}

const char *OfficeBlock::NoInternException::what() const throw()
{
	return "Office Block lacks Intern";
}

OfficeBlock::NoInternException 
& OfficeBlock::NoInternException::operator=(NoInternException const & rhs){
	if (this != &rhs)
	return *this;
return *this;
}
//
// NO_SIGN_BUREAUCRAT_EXCEPTION
//
OfficeBlock::NoSignBureaucratException::NoSignBureaucratException( void ){}
OfficeBlock::NoSignBureaucratException::~NoSignBureaucratException( void ) throw(){}

OfficeBlock::NoSignBureaucratException::NoSignBureaucratException( NoSignBureaucratException const & src)
{
	*this = src;
	return ;
}
const char * OfficeBlock::NoSignBureaucratException::what() const throw()
{
	return "Office Block lacks bureaucrat to sign";
}

OfficeBlock::NoSignBureaucratException 
& OfficeBlock::NoSignBureaucratException::operator=(NoSignBureaucratException const & rhs){
	if (this != &rhs)
	return *this;
return *this;
}
//
// NO_EXEC_BUREAUCRAT_EXCEPTION
//
OfficeBlock::NoExecBureaucratException::NoExecBureaucratException( void ){}
OfficeBlock::NoExecBureaucratException::~NoExecBureaucratException( void ) throw(){}

OfficeBlock::NoExecBureaucratException::NoExecBureaucratException( NoExecBureaucratException const & src)
{
	*this = src;
	return ;
}
const char *OfficeBlock::NoExecBureaucratException::what() const throw()
{
	return "Office Block lacks bureaucrat to sign";
}

OfficeBlock::NoExecBureaucratException 
& OfficeBlock::NoExecBureaucratException::operator=(NoExecBureaucratException const & rhs){
	if (this != &rhs)
	return *this;
return *this;
}

