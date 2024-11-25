CXX = c++

FLAGC = -Wall -Wextra -Werror

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