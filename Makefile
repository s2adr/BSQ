NAME = bsq

SRCS = src/main.c src/ft_split.c src/ft_check_map.c src/ft_condition.c src/ft_get_map.c \
		src/ft_init.c src/ft_manage_file.c src/ft_size.c src/ft_solver.c src/funcs.c src/funcs2.c\

OBJS = ${SRC:.c=.o}

FLAGS = -g3 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
