# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhyman <fhyman@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 20:02:04 by fhyman            #+#    #+#              #
#    Updated: 2021/08/11 20:02:43 by fhyman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

INPUT = $(wildcard ./*.cpp)

FLAGS = -Wall -Wextra -Werror

RM = rm -f

OBJS = $(INPUT:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	clang++ $(OBJS) $(FLAGS) -o $(NAME)
%.o:%.cpp
	clang++ $(FLAGS) -c $< -o $(<:.cpp=.o)
clean:
	$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re