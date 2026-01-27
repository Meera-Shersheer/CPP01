/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 02:01:28 by mshershe          #+#    #+#             */
/*   Updated: 2026/01/27 02:41:03 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
    {
        std::cout << "Error: negative or zero size" <<std::endl;
        return (NULL);
    }
	
	Zombie *Horde = new (std::nothrow) Zombie[N] ;
	
	if (!Horde)
		return (NULL);

	for (int i = 0; i < N; i++ )
		Horde[i].set_name(name);
	return (Horde);
}