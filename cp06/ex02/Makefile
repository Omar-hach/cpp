# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 16:09:34 by ohachami          #+#    #+#              #
#    Updated: 2024/02/19 21:54:14 by ohachami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identifier

CC= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	Base.cpp\
		A.cpp\
		B.cpp\
		C.cpp\
		main.cpp

HEADER = Base.hpp\
		A.hpp\
		B.hpp\
		C.hpp

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
