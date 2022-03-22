/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:15:35 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/22 11:43:56 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

bool	open_files(std::ifstream& ifs, std::ofstream& ofs, std::string filename)
{
	std::string	out_file = filename + ".replace";
	
	ifs.open(filename.c_str(), std::ios_base::in);
	if (!ifs.is_open())
	{
		ifs.close();
		std::cout << "Impossible to open : " << filename << std::endl;
		return (0);
	}
	ofs.open(out_file.c_str(), std::ios_base::out | std::ios_base::trunc);
	if (!ofs.is_open())
	{
		ofs.close();
		std::cout << "Impossible to create : " << out_file << std::endl;
		return (0);
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage : ./GodlikeSed filename to_replace substitute" << std::endl;
		return (1);
	}

	std::ifstream		ifs;
	std::ofstream		ofs;
	if (!open_files(ifs, ofs, av[1]))
		return (1);
	
	std::string			to_replace = av[2];
	std::string			substitute = av[3];
	if (to_replace.empty() || substitute.empty())
	{
		std::cout << "Args should not be empty" << std::endl;
		return (1);
	}
	std::stringstream	buf;
	buf << ifs.rdbuf();
	std::string			haystack = buf.str();
	
	size_t				i = 0;
	while ((i = haystack.find(to_replace, i)) != std::string::npos)
	{
		haystack.erase(i, to_replace.size());
		haystack.insert(i, substitute);
		i += substitute.size();
	}
	ofs << haystack;
	ifs.close();
	ofs.close();
	return (0);
}