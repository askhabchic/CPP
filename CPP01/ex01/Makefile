# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhyman <fhyman@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/15 14:08:16 by fhyman            #+#    #+#              #
#    Updated: 2021/08/15 14:30:59 by fhyman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

INPUT = $(wildcard ./*cpp)

HEADER = Zombie.hpp

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

.PHONY: all clean fclean re