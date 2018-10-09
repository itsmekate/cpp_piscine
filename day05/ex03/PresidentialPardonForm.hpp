/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:17:05 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/09 11:17:06 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CPP
#define PRESIDENTIALPARDONFORM_CPP

#include "Header.hpp"

class PresidentialPardonForm : public Form
{
	private:
		static const std::string _name;
		static const int _gradeToSign = 25;
		static const int _gradeToExecute = 5;
		std::string _target;
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		// virtual ~PresidentialPardonForm();
	
		PresidentialPardonForm( PresidentialPardonForm const & src); 				
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);	

		void		execute(Bureaucrat const & executor) const;
};

#endif
