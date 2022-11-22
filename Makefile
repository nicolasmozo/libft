NAME = libft.a
OBJS = ${SRCS:.c=.o}
SRCS = ft_isascii.c\
				ft_memcpy.c\
				ft_putstr_fd.c\
				ft_strlcat.c\
				ft_strrchr.c\
				ft_atoi.c\
				ft_isdigit.c\
				ft_memmove.c\
				ft_split.c\
				ft_strlcpy.c\
				ft_strtrim.c\
				ft_bzero.c\
				ft_isprint.c\
				ft_memset.c\
				ft_strchr.c\
				ft_strlen.c\
				ft_substr.c\
				ft_calloc.c\
				ft_itoa.c\
				ft_putchar_fd.c\
				ft_strdup.c\
				ft_strmapi.c\
				ft_tolower.c\
				ft_isalnum.c\
				ft_memchr.c\
				ft_putendl_fd.c\
				ft_striteri.c\
				ft_strncmp.c\
				ft_toupper.c\
				ft_isalpha.c\
				ft_memcmp.c\
				ft_putnbr_fd.c\
				ft_strjoin.c\
				ft_strnstr.c\
#INCLUDES = libft.h\
LIB = ar rcs
CC = gcc
RM = rm -f
COMPILE_FLAGS = -Wall -Wextra -Werror
INCLUDES = -I libft.h
.co.o: 
		${CC} ${COMPILE_FLAGS} -c $< -o ${<:.c=.o} ${INCLUDES}

${NAME}: ${OBJS}
		 ${LIB} ${NAME} ${OBJS}
all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all
	
