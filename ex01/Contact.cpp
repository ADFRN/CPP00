/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:03:40 by afournie          #+#    #+#             */
/*   Updated: 2026/05/21 17:36:56 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

bool Contact::setContact(void)
{
	std::string input;

	std::cout << "FirstName: ";
	if (!std::getline(std::cin, input) || input.empty())
		return (false);
	this->firstName = input;

	std::cout << "LastName: ";
	if (!std::getline(std::cin, input) || input.empty())
		return (false);
	this->lastName = input;

	std::cout << "NickName: ";
	if (!std::getline(std::cin, input) || input.empty())
		return (false);
	this->nickName = input;

	std::cout << "PhoneNumber: ";
	if (!std::getline(std::cin, input) || input.empty())
		return (false);
	this->phoneNumber = input;

	std::cout << "DarkestSecret: ";
	if (!std::getline(std::cin, input) || input.empty())
		return (false);
	this->darkestSecret = input;

	return (true);
}

std::string Contact::getFirstName(void) const
{
	return this->firstName;
}

std::string Contact::getLastName(void) const
{
	return this->lastName;
}

std::string Contact::getNickName(void) const
{
	return this->nickName;
}

std::string Contact::getPhoneNumber(void) const
{
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
	return this->darkestSecret;
}
