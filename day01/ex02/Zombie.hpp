/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:49:08 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/02 18:49:10 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Zombie {

	private:
		std::string		_name;
		std::string		_type;

	public:
		Zombie(std::string s, std::string t);
		Zombie( void );
		~Zombie( void );
		void	announce( void ) const;
		static std::string		randomName( void );
};