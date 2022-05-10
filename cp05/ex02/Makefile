# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 18:18:47 by ebeiline          #+#    #+#              #
#    Updated: 2022/05/10 12:42:40 by ebeiline         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec
SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp
FLAG = -Wall -Wextra -Werror

STD_FLAG =  -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAG) $(STD_FLAG) $(SRC) -o $(NAME)
clean:
	rm -f $(NAME)

fclean: clean

re: fclean all