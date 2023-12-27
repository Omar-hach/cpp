# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 16:09:34 by ohachami          #+#    #+#              #
#    Updated: 2023/12/20 00:30:57 by ohachami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	PhoneBook.cpp\
		Contact.cpp\
		main.cpp

OBJ = $(SRC:.cpp=.o)

HEADER =	Contact.hpp\
			PhoneBook.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus
