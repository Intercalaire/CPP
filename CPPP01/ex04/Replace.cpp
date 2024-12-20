/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:25:57 by vgodart           #+#    #+#             */
/*   Updated: 2024/12/20 16:07:11 by vgodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string Replace(std::string s1, std::string s2, std::string str)
{
	if (s1.empty() || s2.empty())
	{
		std::cout << "Error: empty string" << std::endl;
		return (str);
	}
	std::string result;
	size_t start = 0;
	size_t found;

	while ((found = str.find(s1, start)) != std::string::npos)
	{
		result += str.substr(start, found - start);
		result += s2;
		start = found + s1.length();
	}
	result += str.substr(start);
	return result;
}
