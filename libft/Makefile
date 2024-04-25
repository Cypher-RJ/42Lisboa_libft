# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 20:18:14 by rcesar-d          #+#    #+#              #
#    Updated: 2024/04/25 15:45:16 by rcesar-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES = \
		ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
		ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_strlcpy.c ft_memcmp.c ft_memchr.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_itoa.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

B_CFILES = \
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c \

OFILES = $(CFILES:.c=.o)

B_OFILES = $(B_CFILES:.c=.o)

CC = @cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OFILES) $(B_OFILES)
	@ar rcs $(NAME) $(OFILES) $(B_OFILES)
	@echo "OFILES made!!!"

# so:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(CFILES)
# 	gcc -nostartfiles -shared -o libft.so $(OFILES)

clean:
	@rm -f $(OFILES) $(B_OFILES)
	@echo "OFILES removed!!!"
	
fclean:
	@rm -f $(NAME)
	@echo "All removed!!!"

re: fclean $(NAME)

.PHONY: all clean fclean re so
