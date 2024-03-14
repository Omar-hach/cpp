# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 15:49:30 by ohachami          #+#    #+#              #
#    Updated: 2024/03/07 12:05:25 by ohachami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CC= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	PmergeMe.cpp\
		main.cpp

HEADER = PmergeMe.hpp

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

