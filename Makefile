##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## make
##

CC	=	gcc

SRC	=	src/main.c			\
		function/my_putchar.c		\
		src/value_to_square_map.c	\
		src/print.c			\
		src/check_square.c		\
		src/draw_biggest_square.c	\
		src/parsing_function.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Wextra -g

CFLAGS	+=	-I ./include

NAME	=	bsq

all:	$(NAME)

%.o:	%c
	@echo -e "\e[0;94mCompiled\t\e[0;95m$<\e[39m -> \e[38;5;208m$@\e[39m"
	@$(CC) -c ${CFLAGS} -o $@ $<

$(NAME):	$(OBJ)
	@${CC} ${OBJ} -o ${NAME}
	@echo -e "\n\e[0;92mDone ${NAME}"
	@echo -e "\e[0m"

clean:
	@rm -f ${OBJ}
	@echo -e "\e[0;94mObject:\e[38;5;124m\tDeleted"

fclean: clean
	@rm -f ${NAME}
	@echo -e "\e[0;94mExecutable:\e[38;5;124m\tDeleted"
	@echo -e "\e[0m"

re:	fclean all

.PHONY: all clean fclean re
