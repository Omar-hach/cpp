# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 16:09:34 by ohachami          #+#    #+#              #
#    Updated: 2023/12/20 00:30:41 by ohachami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Human

CC= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	HumanB.cpp\
		HumanA.cpp\
		Weapon.cpp\
		main.cpp

HEADER =	HumanA.hpp\
			HumanB.hpp\
			Weapon.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus
