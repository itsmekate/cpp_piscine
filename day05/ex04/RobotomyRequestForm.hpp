/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:16:50 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/09 11:16:51 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Header.hpp"

class RobotomyRequestForm : public Form
{
	private:
		static const std::string _name;
		static const int _gradeToSign = 72;
		static const int _gradeToExecute = 45;
		std::string _target;

	public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();

	RobotomyRequestForm( RobotomyRequestForm const & src); 				
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);	

	void		execute(Bureaucrat const & executor) const;
};

#endif
