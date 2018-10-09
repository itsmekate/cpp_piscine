/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:16:39 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/09 11:16:43 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

const std::string ShrubberyCreationForm::_name = "ShrubberyCreationForm";

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form(_name, _gradeToSign, _gradeToExecute){
	_target="";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(_name, _gradeToSign, _gradeToExecute)
{ this->_target = target;}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src){
	*this = src;
	return ;
} 				
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	if(this != &rhs)
	{
		this->setSigned(rhs.getSigned());
	}
	return *this;
}	

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw Form::GradeTooLowException();
	else if (executor.getGrade() > this->getGradeToExecute())
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		std::ofstream outfile (_target + "_shrubbery");
		outfile << "                      ___" << std::endl;
		outfile << "                _,-\'\"\"   \"\"\"\"`--." << std::endl;
		outfile << "             ,-'          __,,-- \\" << std::endl;
		outfile << "           ,'    __,--\"\"\"\"dF      )" << std::endl;
		outfile << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
		outfile << "        ,'       _Hb ___dF\"-._,-'" << std::endl;
		outfile << "      ,'      _,-\"\"\"\"   \"\"--.._" << std::endl;
		outfile << "     (     ,-'                  `." << std::endl;
		outfile << "      `._,'     _   _             ;" << std::endl;
		outfile << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
		outfile << "       \\    ,'\"Hb.-'HH`-.dHF\"" << std::endl;
		outfile << "        `--'   \"Hb  HH  dF\"" << std::endl;
		outfile << "                \"Hb HH dF" << std::endl;
		outfile << "                 \"HbHHdF" << std::endl;
		outfile << "                  |HHHF" << std::endl;
		outfile << "                  |HHH|" << std::endl;
		outfile << "                  |HHH|" << std::endl;
		outfile << "                  |HHH|" << std::endl;
		outfile << "                  |HHH|" << std::endl;
		outfile << "                  dHHHb" << std::endl;
		outfile << "                .dFd|bHb.               o" << std::endl;
		outfile << "      o       .dHFdH|HbTHb.          o /" << std::endl;
		outfile << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
		outfile << "##########################################" << std::endl;
		outfile.close();
	}
}