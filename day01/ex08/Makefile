# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kprasol <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 19:09:39 by kprasol           #+#    #+#              #
#    Updated: 2018/10/03 19:09:40 by kprasol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = human

SRCS = main.cpp

OBJ = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)
	@echo "\033[0;32mEXETUTABLE [human] CREATED"

$(NAME):
	clang++ $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	clang++ $(FLAGS) -o $@ -c $<

