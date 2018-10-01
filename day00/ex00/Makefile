# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kprasol <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 12:23:12 by kprasol           #+#    #+#              #
#    Updated: 2018/10/01 12:23:13 by kprasol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJ = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	g++ $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
