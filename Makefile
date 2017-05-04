# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 08:03:35 by mcassar           #+#    #+#              #
#    Updated: 2017/05/04 04:37:23 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c $(FLAGS)
FONCTIONS =	ft_printf.o\
			ft_printf_p.o\
			ft_printf_d.o\
			ft_printf_s.o\
			ft_printf_c_maj.o\
			ft_printf_d_maj.o\
			ft_printf_s_maj.o\
			ft_printf_x.o\
			ft_whattodo.o\
			ft_whichflag.o\



SRCS =		srcs/ft_printf.c\
			srcs/ft_printf_p.c\
			srcs/ft_printf_d.c\
			srcs/ft_printf_s.c\
			srcs/ft_printf_c_maj.c\
			srcs/ft_printf_d_maj.c \
			srcs/ft_printf_s_maj.c\
			srcs/ft_printf_x.c\
			srcs/ft_whattodo.c\
			srcs/ft_whichflag.c\

all: $(NAME)

$(NAME):
	@printf "\x1b[32mMake"
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@printf "\x1b[32m."
	@sleep 0.2
	@gcc $(OPTIONS) $(SRCS)
	@ar rc $(NAME) $(FONCTIONS)
	@ranlib $(NAME)
	@mkdir objects
	@mv $(FONCTIONS) objects/
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

re: fclean all

.PHONY: all clean fclean re
