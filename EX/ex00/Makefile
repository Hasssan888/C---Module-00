# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 11:28:19 by hbakrim           #+#    #+#              #
#    Updated: 2024/11/23 11:28:21 by hbakrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

FLAGC = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = ${SRC:.cpp=.o}

NAME = megaphone

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${FLAGC} -o ${NAME} ${OBJ}

%.o: %.cpp
	${CXX} ${FLAGC} -c $< -o $@

clean:
	rm -f ${OBJ} 

fclean: clean
	rm -f ${NAME}

re : fclean all
