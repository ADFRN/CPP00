/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 10:26:01 by afournie          #+#    #+#             */
/*   Updated: 2026/05/25 09:58:12 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (i < ac)
	{
		std::string text = av[i];
		for (char &c : text)
		{
			c = std::toupper(c);
		}
		std::cout << text;
		i++;
	}
	std::cout << std::endl;
	return (0);
}
