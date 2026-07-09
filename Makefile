NAME = libasm.a
SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s
OBJ = $(SRC:.s=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
NASM = nasm
NASMFLAGS = -f elf64
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.s
	$(NASM) $(NASMFLAGS) $< -o $@

# Compile main.c with libasm.a and run
run: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -o test
	./test

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) test

re: fclean all

.PHONY: all clean fclean re run