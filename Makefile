NAME  =	libft.a
FLAGS =	-Wall -Wextra -Werror
SRCAF =	./ft_itoa.c			\
		./ft_memalloc.c		\
		./ft_memdel.c		\
		./ft_putchar.c		\
		./ft_putchar_fd.c	\
		./ft_putendl.c		\
		./ft_putendl_fd.c	\
		./ft_putnbr.c		\
		./ft_putnbr_fd.c	\
		./ft_putstr.c		\
		./ft_putstr_fd.c	\
		./ft_strclr.c		\
		./ft_strdel.c		\
		./ft_strequ.c		\
		./ft_striter.c		\
		./ft_striteri.c		\
		./ft_strjoin.c		\
		./ft_strmap.c		\
		./ft_strmapi.c		\
		./ft_strnequ.c		\
		./ft_strnew.c		\
		./ft_strsplit.c	    \
		./ft_strsub.c		\
		./ft_strtrim.c

SRCBF =	./ft_lstadd.c		\
		./ft_lstdel.c		\
		./ft_lstdelone.c	\
		./ft_lstiter.c		\
		./ft_lstmap.c		\
		./ft_lstnew.c

SRCCF =	./ft_atoi.c			\
		./ft_bzero.c		\
		./ft_isalnum.c		\
		./ft_isalpha.c		\
		./ft_isascii.c		\
		./ft_isdigit.c		\
		./ft_isprint.c		\
		./ft_memccpy.c		\
		./ft_memchr.c		\
		./ft_memcmp.c		\
		./ft_memcpy.c		\
		./ft_memmove.c		\
		./ft_memset.c		\
		./ft_strcat.c		\
		./ft_strchr.c		\
		./ft_strcmp.c		\
		./ft_strcpy.c		\
		./ft_strdup.c		\
		./ft_strlcat.c		\
		./ft_strlen.c		\
		./ft_strncat.c		\
		./ft_strncmp.c		\
		./ft_strncpy.c		\
		./ft_strnstr.c		\
		./ft_strrchr.c		\
		./ft_strstr.c		\
		./ft_tolower.c		\
		./ft_toupper.c

SRCUF = ./ft_abs.c			\
		./ft_isspace.c		\
		./ft_memrchr.c		\
		./ft_memrcpy.c		\
		./ft_nbrlen.c		\
		./ft_putcat.c		\
		./ft_putcat_fd.c	\
		./ft_strarrdel.c	\
		./ft_strarrnew.c	\
		./ft_strnchr.c		\
		./ft_strndup.c		\
		./ft_strnlen.c

OBJAF =	./ft_itoa.o			\
		./ft_memalloc.o		\
		./ft_memdel.o		\
		./ft_putchar.o		\
		./ft_putchar_fd.o	\
		./ft_putendl.o		\
		./ft_putendl_fd.o	\
		./ft_putnbr.o		\
		./ft_putnbr_fd.o	\
		./ft_putstr.o		\
		./ft_putstr_fd.o	\
		./ft_strclr.o		\
		./ft_strdel.o		\
		./ft_strequ.o		\
		./ft_striter.o		\
		./ft_striteri.o		\
		./ft_strjoin.o		\
		./ft_strmap.o		\
		./ft_strmapi.o		\
		./ft_strnequ.o		\
		./ft_strnew.o		\
		./ft_strsplit.o		\
		./ft_strsub.o		\
		./ft_strtrim.o

OBJBF = ./ft_lstadd.o		\
		./ft_lstdel.o		\
		./ft_lstdelone.o	\
		./ft_lstiter.o		\
		./ft_lstmap.o		\
		./ft_lstnew.o

OBJCF =	./ft_atoi.o			\
		./ft_bzero.o		\
		./ft_isalnum.o		\
		./ft_isalpha.o		\
		./ft_isascii.o		\
		./ft_isdigit.o		\
		./ft_isprint.o		\
		./ft_memccpy.o		\
		./ft_memchr.o		\
		./ft_memcmp.o		\
		./ft_memcpy.o		\
		./ft_memmove.o		\
		./ft_memset.o		\
		./ft_strcat.o		\
		./ft_strchr.o		\
		./ft_strcmp.o		\
		./ft_strcpy.o		\
		./ft_strdup.o		\
		./ft_strlcat.o		\
		./ft_strlen.o		\
		./ft_strncat.o		\
		./ft_strncmp.o		\
		./ft_strncpy.o		\
		./ft_strnstr.o		\
		./ft_strrchr.o		\
		./ft_strstr.o		\
		./ft_tolower.o		\
		./ft_toupper.o

OBJUF =	./ft_abs.o			\
		./ft_isspace.o		\
		./ft_memrchr.o		\
		./ft_memrcpy.o		\
		./ft_nbrlen.o		\
		./ft_putcat.o		\
		./ft_putcat_fd.o	\
		./ft_strarrdel.o	\
		./ft_strarrnew.o	\
		./ft_strnchr.o		\
		./ft_strndup.o		\
		./ft_strnlen.o

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRCAF) $(SRCBF) $(SRCCF) $(SRCUF)
	@ar rc $(NAME) $(OBJAF) $(OBJBF) $(OBJCF) $(OBJUF)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJAF) $(OBJBF) $(OBJCF) $(OBJUF)

fclean: clean
	@rm -f $(NAME)

re: fclean all

check: fclean
	@cd ../libft-unit-test/ && make f
	@make fclean

checkf: fclean
	@cd ../libft-unit-test/ && make f && cat ./result.log
	@make fclean
