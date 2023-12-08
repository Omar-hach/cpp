# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 16:09:34 by ohachami          #+#    #+#              #
#    Updated: 2023/12/08 08:28:38 by ohachami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC= c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	Zombie.cpp\
		randomChump.cpp\
		newZombie.cpp\
		main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus
