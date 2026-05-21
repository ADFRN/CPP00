/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:09:19 by afournie          #+#    #+#             */
/*   Updated: 2026/05/21 15:24:18 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void ft_add(void)
{
	return ;
}

void ft_search(void)
{
	return;
}

void executeOrder(std::string tmp)
{
	if (tmp == "ADD")
		ft_add();
	else if (tmp == "SEARCH")
		ft_search();
	else if (tmp == "EXIT")
		exit(EXIT_SUCCESS);
	else
		return ;
}

int main (void)
{
	std::string tmp;

	while (1)
	{
		std::cout << "$> ";
		std::getline(std::cin >> std::ws,tmp);
		executeOrder(tmp);
	}
	return (0);
}
