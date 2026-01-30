/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 02:57:03 by mshershe          #+#    #+#             */
/*   Updated: 2026/01/30 02:44:51 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

int replace_in_file(std::string rfilename, std::string s1, std::string s2);
std::string replace_line(std::string& line, size_t pos, std::string& replacement, std::string&  replace_s);

#endif