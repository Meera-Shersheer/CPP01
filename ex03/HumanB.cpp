/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:18:07 by mshershe          #+#    #+#             */
/*   Updated: 2026/01/28 17:56:17 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

void HumanB::attack()
{
	if (!this->weapon)
    {
        std::cout << name << " doesn't have a weapon " << std::endl;
        return;
    }
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
