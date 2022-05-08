# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 18:44:44 by ebeiline          #+#    #+#              #
#    Updated: 2022/05/08 12:54:43 by ebeiline         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondtrap
SRC = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
FLAG = -Wall -Wextra -Werror

STD_FLAG =  -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAG) $(STD_FLAG) $(SRC) -o $(NAME)
clean:
	rm -f $(NAME)

fclean: clean

re: fclean all