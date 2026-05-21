/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:03:37 by afournie          #+#    #+#             */
/*   Updated: 2026/05/21 15:12:39 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact {

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string dSecret;

	public:
	Contact( void );
	~Contact( void );

	void setContact(void);
	void displayContact(void);
};

#endif
