/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 00:48:39 by mshershe          #+#    #+#             */
/*   Updated: 2026/01/27 01:07:35 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name = "Nameless";
}

Zombie::Zombie(std::string	name)
{
	this->name = name;
}

void  Zombie::announce( void )
{
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<< std::endl;	
}

Zombie::~Zombie(void)
{
	std::cout<<this->name<<" have been killed"<< std::endl;
}