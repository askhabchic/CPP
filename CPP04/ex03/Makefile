# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhyman <fhyman@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/02 20:46:22 by fhyman            #+#    #+#              #
#    Updated: 2021/09/02 20:46:49 by fhyman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia

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
