# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 16:09:34 by ohachami          #+#    #+#              #
#    Updated: 2023/12/29 10:49:47 by ohachami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CC= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	WrongCat.cpp\
		WrongAnimal.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		Brain.cpp\
		main.cpp

HEADER = Animal.hpp\
			Dog.hpp\
			Cat.hpp\
			Brain.hpp\
			WrongAnimal.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
