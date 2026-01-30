/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:58:50 by mshershe          #+#    #+#             */
/*   Updated: 2026/01/30 03:38:16 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

enum level_enum {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};


class Harl
{ 
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Harl();
		void complain( std::string level );
	
};

#endif