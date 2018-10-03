# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kprasol <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 15:33:19 by kprasol           #+#    #+#              #
#    Updated: 2018/10/03 15:33:20 by kprasol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

SRCS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)
	@echo "\033[0;31mEXETUTABLE [violence] CREATED"

$(NAME):
	clang++ $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	clang++ $(FLAGS) -o $@ -c $<
