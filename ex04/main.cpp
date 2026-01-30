/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:18:14 by mshershe          #+#    #+#             */
/*   Updated: 2026/01/29 22:59:45 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed filename s1 s2" << std::endl;
		return (1);
	}
	if (replace_in_file(argv[1], argv[2], argv[3]))
		return (1);
	
	return (0);
}

int replace_in_file(std::string rfilename, std::string s1, std::string s2)
{
	std::ifstream	readfile;
	std::string		copy_line;
	std::string		outfilename = rfilename + ".replace";
	size_t pos;
	
	if (s1.empty())
	{
		std::cerr << "Error: s1 can't be empty" << std::endl;
		return (1);
	}
	readfile.open(rfilename.c_str());
	if (!readfile.is_open())
	{
		std::cerr << "Error: couldn't open the provided file" << std::endl;
		return (1);
	}
	
	std::ofstream	writefile(outfilename.c_str());
	if (!writefile.is_open())
	{
		std::cerr << "Error: couldn't open the output file" << std::endl;
		return (1);
	}
	
	while (std::getline(readfile, copy_line))
	{
		pos = copy_line.find(s1);
		while (pos != std::string::npos)
		{
			copy_line = replace_line(copy_line, pos, s2, s1);
			pos = copy_line.find(s1, pos + s2.length());
		}
		writefile << copy_line << std::endl;
	}
	readfile.close();
	writefile.close();
	return (0);
}

std::string replace_line(std::string& line, size_t pos, std::string& replacement, std::string&  replace_s)
{
		std::string		result;

		result = line.substr(0, pos);
		result += replacement;
		result += line.substr(pos + replace_s.length());
		
		return (result);
}