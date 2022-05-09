# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 11:49:37 by ebeiline          #+#    #+#              #
#    Updated: 2022/05/09 12:06:45 by ebeiline         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
FLAG = -Wall -Wextra -Werror

STD_FLAG =  -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAG) $(STD_FLAG) $(SRC) -o $(NAME)
clean:
	rm -f $(NAME)

fclean: clean

re: fclean all