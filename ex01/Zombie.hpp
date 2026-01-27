/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 00:48:48 by mshershe          #+#    #+#             */
/*   Updated: 2026/01/27 02:44:06 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


	class Zombie
	{
		private:
			std::string	name;
			
			public:
			Zombie();
			Zombie(std::string	name);
			~Zombie();
			void set_name(std::string	name);
			void announce( void );
			
	};
	
	
	Zombie* zombieHorde( int N, std::string name );
	
#endif