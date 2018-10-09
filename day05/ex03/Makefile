# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kprasol <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/08 14:58:47 by kprasol           #+#    #+#              #
#    Updated: 2018/10/08 14:58:49 by kprasol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out 

SRCS = Bureaucrat.cpp Form.cpp main.cpp \
ShrubberyCreationForm.cpp RobotomyRequestForm.cpp  \
PresidentialPardonForm.cpp Intern.cpp\

OBJ = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)
	@echo "\033[0;32mEXETUTABLE [a.out] CREATED"

$(NAME): $(OBJ)
	clang++ $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	clang++ $(FLAGS) -o $@ -c $<

