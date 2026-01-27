/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 00:48:48 by mshershe          #+#    #+#             */
/*   Updated: 2026/01/27 02:02:17 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


	class Zombie
	{
		private:
			std::string	name;
			Zombie();
			
			public:
			Zombie(std::string	name);
			~Zombie();
			void announce( void );
			
	};
		
	
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
	
#endif