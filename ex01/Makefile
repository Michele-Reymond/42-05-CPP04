SRCS	= 	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp
CFLAGS	= -Wall -Werror -Wextra -std=c++98
CC		= c++
NAME	= animalerie
OBJS	= ${SRCS:.cpp=.o}
RM		= rm -f

all:	${NAME}

$(NAME): ${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

run:
	./${NAME}

mrun: all run

.PHONY: all clean fclean re run mrun