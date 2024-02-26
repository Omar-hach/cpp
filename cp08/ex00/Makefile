# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 23:40:43 by ohachami          #+#    #+#              #
#    Updated: 2024/02/24 23:42:06 by ohachami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

CC= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	easyfind.cpp\
		main.cpp
		

HEADER = easyfind.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp $(HEADER)
		$(CC) -c  $(CPPFLAGS) $< -o $@

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
