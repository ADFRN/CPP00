/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:52:27 by afournie          #+#    #+#             */
/*   Updated: 2026/05/21 17:48:31 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
// #include <string>
// #include <cctype>

class PhoneBook {

	Contact contacts[8];
	int index;
	int count;

	public:
	PhoneBook( void );
	~PhoneBook( void );

	void addContact(void);
	void searchContact(void);
};

#endif
