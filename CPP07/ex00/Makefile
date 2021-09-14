# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhyman <fhyman@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/11 21:24:52 by fhyman            #+#    #+#              #
#    Updated: 2021/09/12 20:06:37 by fhyman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = template

INPUT = $(wildcard ./*cpp)

HEADER = $(wildcard ./*hpp)

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