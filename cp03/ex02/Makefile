# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 18:44:44 by ebeiline          #+#    #+#              #
#    Updated: 2022/05/08 11:33:59 by ebeiline         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap
SRC = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp
FLAG = -Wall -Wextra -Werror

STD_FLAG =  -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAG) $(STD_FLAG) $(SRC) -o $(NAME)
clean:
	rm -f $(NAME)

fclean: clean

re: fclean all