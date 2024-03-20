Library = libft

files = ft_strlen \
		ft_strlcpy \
		ft_lstsize \
		ft_atoi \
		ft_isalnum \
		ft_isalpha \
		ft_isdigit \
		ft_isascii \
		ft_toupper \
		ft_tolower \
		ft_strlcat \
		ft_memcpy \
		ft_isprint \
		ft_memset \
		ft_strchr \
		ft_strncmp \
		ft_strrchr \
		ft_bzero \
		ft_lstadd_back \
		ft_lstadd_front \
		ft_lstlast \


Compiler = gcc

CmpFlags = -Wall -Wextra -Werror

OUTN = $(Library).a

CFILES = $(files:%=%.c)

OFILES = $(files:%=%.o)

NAME = $(OUTN)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar -rc $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re