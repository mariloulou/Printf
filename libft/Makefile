# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 08:03:35 by mcassar           #+#    #+#              #
#    Updated: 2017/02/28 01:52:54 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c $(FLAGS)
FONCTIONS =	ft_atoi.o \
			ft_bzero.o \
			ft_isalnum.o\
			ft_isalpha.o \
			ft_isascii.o \
			ft_isdigit.o \
			ft_isprint.o \
			ft_itoa.o \
			ft_memalloc.o \
			ft_memccpy.o \
			ft_memchr.o \
			ft_memcmp.o \
			ft_memcpy.o \
			ft_memdel.o \
			ft_memmove.o \
			ft_memset.o \
			ft_putchar.o \
			ft_putchar_fd.o \
			ft_putnbr.o \
			ft_putnbr_fd.o \
			ft_putendl.o \
			ft_putendl_fd.o \
			ft_putstr.o \
			ft_putstr_fd.o \
			ft_strcat.o \
			ft_strchr.o \
			ft_strclr.o \
			ft_strcmp.o \
			ft_strcpy.o \
			ft_strdel.o \
			ft_strdup.o \
			ft_strequ.o \
			ft_striter.o \
			ft_striteri.o \
			ft_strjoin.o \
			ft_strlcat.o \
			ft_strlen.o \
			ft_strmap.o \
			ft_strmapi.o \
			ft_strncat.o \
			ft_strncmp.o \
			ft_strncpy.o \
			ft_strnew.o \
			ft_strnequ.o \
			ft_strnstr.o \
			ft_strrchr.o \
			ft_strsplit.o \
			ft_strstr.o \
			ft_strsub.o \
			ft_strtrim.o \
			ft_tl.o \
			ft_tolower.o \
			ft_toupper.o \




SRCS =		srcs/ft_atoi.c \
			srcs/ft_bzero.c \
			srcs/ft_isalnum.c \
			srcs/ft_isalpha.c \
			srcs/ft_isascii.c \
			srcs/ft_isdigit.c \
			srcs/ft_isprint.c \
			srcs/ft_itoa.c \
			srcs/ft_memalloc.c \
			srcs/ft_memccpy.c \
			srcs/ft_memchr.c \
			srcs/ft_memcmp.c \
			srcs/ft_memcpy.c \
			srcs/ft_memdel.c \
			srcs/ft_memmove.c \
			srcs/ft_memset.c \
			srcs/ft_putchar.c \
			srcs/ft_putchar_fd.c \
			srcs/ft_putnbr.c \
			srcs/ft_putnbr_fd.c \
			srcs/ft_putendl.c \
			srcs/ft_putendl_fd.c \
			srcs/ft_putstr.c \
			srcs/ft_putstr_fd.c \
			srcs/ft_strcat.c \
			srcs/ft_strchr.c \
			srcs/ft_strclr.c \
			srcs/ft_strcmp.c \
			srcs/ft_strcpy.c \
			srcs/ft_strdel.c \
			srcs/ft_strdup.c \
			srcs/ft_strequ.c \
			srcs/ft_striter.c \
			srcs/ft_striteri.c \
			srcs/ft_strjoin.c \
			srcs/ft_strlcat.c \
			srcs/ft_strlen.c \
			srcs/ft_strmap.c \
			srcs/ft_strmapi.c \
			srcs/ft_strncat.c \
			srcs/ft_strncmp.c \
			srcs/ft_strncpy.c \
			srcs/ft_strnew.c \
			srcs/ft_strnequ.c \
			srcs/ft_strnstr.c \
			srcs/ft_strrchr.c \
			srcs/ft_strsplit.c \
			srcs/ft_strstr.c \
			srcs/ft_strsub.c \
			srcs/ft_strtrim.c \
			srcs/ft_tl.c \
			srcs/ft_tolower.c \
			srcs/ft_toupper.c \

all: $(NAME)

$(NAME):
	@printf "\x1b[32mObject files creation"
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m\n"
	@gcc $(OPTIONS) $(SRCS)
	@sleep 0.6
	@printf "\x1b[32mStuff is processing"
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m\n"
	@ar rc $(NAME) $(FONCTIONS)
	@sleep 0.6
	@printf "\x1b[32mLibft.a file is being created"
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@printf "\x1b[32m\n"
	@ranlib $(NAME)
	@sleep 0.6
	@printf "\x1b[32mObject folder is being created"
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@printf "\x1b[32m\n"
	@mkdir objects
	@sleep 0.6
	@printf "\x1b[32mObject file are being redricted in the object folder"
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@printf "\x1b[32m\n"
	@mv $(FONCTIONS) objects/
	@sleep 0.6
	@printf "\x1b[32mMake"
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m\n"
	@printf "\x1b[32mDone!"
	@printf "\x1b[32m\n"

clean:
	@printf "\x1b[32mObject files are being removed"
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m\n"
	@rm -rf objects/
	@printf "\x1b[32mDone!"
	@printf "\x1b[32m\n"
fclean: clean
	@printf "\x1b[32mLibft.a file is being removed"
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m\n"
	@/bin/rm -f $(NAME)
	@printf "\x1b[32mDone!"
	@printf "\x1b[32m\n"

re: fclean all

.PHONY: all clean fclean re