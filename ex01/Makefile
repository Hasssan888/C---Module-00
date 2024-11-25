CXX = c++

FLAGS = -Wall -Wextra -Werror

NAME = PhoneBook

SRC = PhoneBook.cpp utilis.cpp main.cpp

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