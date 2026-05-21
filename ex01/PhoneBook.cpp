/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:03:43 by afournie          #+#    #+#             */
/*   Updated: 2026/05/21 17:35:16 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	this->count = 0;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::addContact(void)
{
	if (!this->contacts[this->index].setContact())
	{
		std::cout << "Contact creation aborted" << std::endl;
		return;
	}
	this->index = (this->index + 1) % 8;
	if (this->count < 8)
		this->count++;
}

std::string formatColumn(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";

	while (str.length() < 10)
		str = " " + str;

	return str;
}

void PhoneBook::searchContact(void)
{
	std::string input;
	int i = 0;

	if (this->count == 0)
	{
		std::cout << "No contacts" << std::endl;
		return;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index| firstname|  lastname|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < this->count)
	{
		std::cout << "|"
		<< formatColumn(std::to_string(i)) << "|"
		<< formatColumn(this->contacts[i].getFirstName()) << "|"
		<< formatColumn(this->contacts[i].getLastName()) << "|"
		<< formatColumn(this->contacts[i].getNickName()) << "|"
		<< std::endl;
		i++;
	}
	std::cout << "Enter index: ";
	if (!std::getline(std::cin >> std::ws, input))
		return ;
	int index = std::stoi(input);
	if (index < 0 || index >= this->count)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	Contact c = this->contacts[index];
	std::cout << c.getFirstName() << std::endl;
	std::cout << c.getLastName() << std::endl;
	std::cout << c.getNickName() << std::endl;
	std::cout << c.getPhoneNumber() << std::endl;
	std::cout << c.getDarkestSecret() << std::endl;

}
