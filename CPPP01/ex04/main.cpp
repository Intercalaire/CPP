/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:13:13 by vgodart           #+#    #+#             */
/*   Updated: 2024/12/03 15:13:15 by vgodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"


int main(int argc, char **argv)
{
	std::string copie_argv;
	std::string str;
	if (argc != 4)
	{
		std::cout << "Usage: ./ex04 [file] [s1] [s2]" << std::endl;
		return 1;
	}
	std::ifstream fs(argv[1]);
	if (!fs.is_open())
	{
		std::cout << "Error: file not found" << std::endl;
		return 1;
	}
	copie_argv = argv[1] + std::string(".replace");
	std::ofstream fs_copie(copie_argv.c_str());
	if (!fs.is_open())
	{
		std::cout << "Error: file not found" << std::endl;
		return 1;
	}
	while (std::getline(fs, str))
	{
        std::string modified_line = Replace(argv[2], argv[3], str);
        fs_copie << modified_line;
        if (!fs.eof())
            fs_copie << '\n';
	}
	fs.close();
	return (0);

	
}
