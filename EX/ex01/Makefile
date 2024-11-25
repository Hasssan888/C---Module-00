# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 11:28:56 by hbakrim           #+#    #+#              #
#    Updated: 2024/11/23 11:28:58 by hbakrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

SRC = PhoneBook.cpp utilis.cpp main.cpp Contact.cpp

OBJE = ${SRC:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJE}
	${CXX} ${FLAGS} -o ${NAME} ${OBJE}

%.o: %.cpp
	${CXX} ${FLAGS} -c $< -o $@

clean:
		rm -f ${OBJE}

fclean: clean
		rm -f ${NAME}

re: fclean all
