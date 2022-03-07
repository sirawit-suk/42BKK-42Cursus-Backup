CC = gcc
CFLAGS = -Wall -Werror -Wextra

# part 1
IS_LIBC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_isdigit.c ft_isalpha.c
TO_LIBC = ft_toupper.c ft_tolower.c ft_atoi.c
STR_LIBC = ft_strchr.c ft_strrchr.c ft_strlen.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_strdup.c
MEM_LIBC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c
# LIBC = $(IS_LIBC) $(TO_LIBC) $(STR_LIBC) $(MEM_LIBC)
LIBC = ft_strlen.c

# part 2
STR_ADDC = ft_substr.c
ADDC = $(STR_ADDC)
SRCS = $(LIBC) # $(ADDC)
OBJS = $(SRCS:.c=.o)
NAME = libft.a
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^
	ranlib $@
%.o: %.c
	$(CC) -c $< -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
