/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 00:49:01 by mshershe          #+#    #+#             */
/*   Updated: 2026/01/27 02:45:25 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int n = 5; 
	Zombie *Z_Horde = zombieHorde(n, " Brain");
	if (!Z_Horde)
		return (1);
		
	for (int i = 0; i < n ;i++ )
		Z_Horde[i].announce();

	delete [] Z_Horde;
	return (0);
}
