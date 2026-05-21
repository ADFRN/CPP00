/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:09:19 by afournie          #+#    #+#             */
/*   Updated: 2026/05/21 17:48:25 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// std::string trim(const std::string &str)
// {
// 	size_t start = 0;
// 	size_t end = str.length();

// 	while (start < end && std::isspace(str[start]))
// 		start++;

// 	while (end > start && std::isspace(str[end - 1]))
// 		end--;

// 	return str.substr(start, end - start);
// }

int	main(void)
{
	PhoneBook phonebook;
	std::string input;

	while (1)
	{
		std::cout << "$> ";
		if (!std::getline(std::cin >> std::ws, input))
			return (1);
		if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input == "EXIT")
			break;
	}
	return (0);
}
