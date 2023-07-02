# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amejia <amejia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 23:52:11 by amejia            #+#    #+#              #
#    Updated: 2023/07/02 23:55:01 by amejia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = AMateria.cpp Character.cpp Cure.cpp  \
	Ice.cpp MateriaSource.cpp main.cpp

NAME = materia
NAME_DEBUG = debug


OBJS = ${SRCS:.cpp=.o}

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

CC = c++

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(NAME_DEBUG): $(SRCS) 
	$(CC) $(CFLAGS) -g3 $(SRCS) -o $@

debug: $(NAME_DEBUG)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) $(NAME_DEBUG)

re: fclean all

.PHONY = all clean fclean debug re 