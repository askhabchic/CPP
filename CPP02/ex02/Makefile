# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhyman <fhyman@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 19:53:00 by fhyman            #+#    #+#              #
#    Updated: 2021/08/29 19:53:04 by fhyman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

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