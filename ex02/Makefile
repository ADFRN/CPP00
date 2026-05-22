# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afournie <afournie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/22 10:07:20 by afournie          #+#    #+#              #
#    Updated: 2026/05/22 10:07:59 by afournie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= Account.cpp tests.cpp
OBJ			= $(SRC:.cpp=.o)

CC			= c++ -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

NAME		= phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
