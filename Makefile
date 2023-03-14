# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 18:54:30 by kumalong          #+#    #+#              #
#    Updated: 2023/02/22 18:54:30 by kumalong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BONUS = .bonus

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_strlen.c ft_strchr.c ft_memmove.c ft_memcpy.c ft_memchr.c ft_calloc.c ft_bzero.c ft_atoi.c \
		ft_memset.c ft_strlcpy.c ft_strjoin.c ft_strdup.c ft_striteri.c ft_strtrim.c ft_substr.c ft_tolower.c \
		ft_split.c ft_strchr.c ft_putstr_fd.c ft_putchar_fd.c ft_strlen.c ft_strncmp.c ft_strmapi.c ft_strlcat.c \
		ft_memcmp.c ft_putendl_fd.c ft_strnstr.c  ft_strrchr.c ft_itoa.c ft_split.c ft_putnbr_fd.c \

SRCSBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c  ft_lstmap.c \

OBJS = $(SRCS:.c=.o)
OBJSBONUS = $(SRCSBONUS:.c=.o)

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c libft.h Makefile
	${CC} ${CFLAGS} $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	@echo $(NAME) and files .o created

bonus: $(OBJS) $(OBJSBONUS)
	ar -rc $(NAME) $(OBJS) $(OBJSBONUS)
	@touch bonus
	@echo bonus compiled

clean:
	$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
