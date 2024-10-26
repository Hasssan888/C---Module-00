C++ = c++

FLAGS = -Wall -Wextra -Werror

NAME = PhoneBook

SRC = PhoneBook.cpp utilis.cpp

OBJE = ${SRC:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJE}
	${C++} ${FLAGS} -o ${NAME} ${OBJE}

%.o: %.cpp
	${C++} ${FLAGS} -c $< -o $@

clean:
		rm -f ${OBJE}

fclean: clean
		rm -f ${NAME}

re: fclean all