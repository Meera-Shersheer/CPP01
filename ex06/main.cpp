/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:18:14 by mshershe          #+#    #+#             */
/*   Updated: 2026/01/30 03:43:34 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl = Harl();

	if (argc != 2)
	{
		std::cout<< "Usage: ./harlFilter level "<< std::endl;
		return (1);
	}
	
	harl.complain(argv[1]);	
	return (0);
}

