# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 16:09:34 by ohachami          #+#    #+#              #
#    Updated: 2023/12/15 22:11:25 by ohachami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC= c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	Zombie.cpp\
		zombieHorde.cpp\
		main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) *.hpp
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus
