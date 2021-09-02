# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhyman <fhyman@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 17:37:03 by fhyman            #+#    #+#              #
#    Updated: 2021/09/01 12:38:37 by fhyman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

INPUT = $(wildcard ./*cpp)

HEADER = $(wildcard ./*h)

FLAGS = -Wall -Werror -Wextra

RM = rm -f

OBJ = $(INPUT:.cpp=.o)

all: $(NAME) 
$(NAME): $(OBJ) $(HEADER)
	@clang++ $(OBJ) $(FLAGS) -o $(NAME)
%.o:%.cpp
	@clang++ $(FLAGS) -c $< -o $(<:.cpp=.o)
clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(NAME)
re: fclean all