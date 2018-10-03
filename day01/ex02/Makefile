# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kprasol <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 14:19:55 by kprasol           #+#    #+#              #
#    Updated: 2018/10/03 14:19:56 by kprasol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie 

SRCS = Zombie.cpp main.cpp ZombieEvent.cpp

OBJ = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)
	@echo "\033[0;32mEXETUTABLE [zombie] CREATED"

$(NAME):
	clang++ $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	clang++ $(FLAGS) -o $@ -c $<
