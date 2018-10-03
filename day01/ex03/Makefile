# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kprasol <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 14:19:43 by kprasol           #+#    #+#              #
#    Updated: 2018/10/03 14:19:45 by kprasol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombiehorde 

SRCS = Zombie.cpp main.cpp ZombieHorde.cpp

OBJ = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)
	@echo "\033[0;32mEXETUTABLE [zombiehorde] CREATED"

$(NAME):
	clang++ $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	clang++ $(FLAGS) -o $@ -c $<
