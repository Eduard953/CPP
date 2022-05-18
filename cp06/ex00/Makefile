# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 12:17:54 by ebeiline          #+#    #+#              #
#    Updated: 2022/05/18 12:18:12 by ebeiline         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Cast
SRC = main.cpp Cast.cpp
FLAG = -Wall -Wextra -Werror

STD_FLAG =  -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAG) $(STD_FLAG) $(SRC) -o $(NAME)
clean:
	rm -f $(NAME)

fclean: clean

re: fclean all