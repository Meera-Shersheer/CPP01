/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 00:49:01 by mshershe          #+#    #+#             */
/*   Updated: 2026/01/27 01:59:16 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie Z1 = Zombie("Z_stack_1");
	Zombie *Z2 = newZombie("Z_heap");
	if (!Z2)
		return (1);
	Z1.announce();
	Z2->announce();
	randomChump("Z_stack_2");

	delete Z2;
	return (0);
}
/*
Z1 scope is the main function so the deconstructor is called at the last of it 
Z2 is stored on the heap so a delete it must be called to free its memory or it will cause leaks 
Z_stack_2 scope is inside thr randomChump function so the destructor is called once done with
	this function although the program is still running
For stack created objects the deconstructor is called autamatically
	unlike the heap located objects a "delete" must be called
*/