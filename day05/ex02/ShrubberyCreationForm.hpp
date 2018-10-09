/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:16:34 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/09 11:16:35 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Header.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		static const std::string _name;
		static const int _gradeToSign = 145;
		static const int _gradeToExecute = 137;
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
	
		ShrubberyCreationForm( ShrubberyCreationForm const & src); 				
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

		void		execute(Bureaucrat const & executor) const;
};

#endif
