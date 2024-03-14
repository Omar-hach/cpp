# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 15:49:30 by ohachami          #+#    #+#              #
#    Updated: 2024/03/05 15:52:06 by ohachami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CC= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	RPN.cpp\
		main.cpp

HEADER = RPN.hpp

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

