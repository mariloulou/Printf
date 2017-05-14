# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <marvin42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 08:03:35 by mcassar           #+#    #+#              #
#    Updated: 2017/05/13 01:30:32 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c $(FLAGS)
FONCTIONS =	ft_printf.o\
			ft_printf_c.o\
			ft_printf_c_maj.o\
			ft_printf_d.o\
			ft_printf_d_maj.o\
			ft_printf_o.o\
			ft_printf_o_maj.o\
			ft_printf_p.o\
			ft_printf_s.o\
			ft_printf_s_maj.o\
			ft_printf_u.o\
			ft_printf_u_maj.o\
			ft_printf_x.o\
			ft_printf_x_maj.o\
			ft_whattodo.o\
			ft_whichflag.o\
			ft_whichparam.o



SRCS =		srcs/ft_printf.c\
			srcs/ft_printf_c.c\
			srcs/ft_printf_c_maj.c\
			srcs/ft_printf_d.c\
			srcs/ft_printf_d_maj.c \
			srcs/ft_printf_o.c\
			srcs/ft_printf_o_maj.c\
			srcs/ft_printf_p.c\
			srcs/ft_printf_s.c\
			srcs/ft_printf_s_maj.c\
			srcs/ft_printf_u.c\
			srcs/ft_printf_u_maj.c\
			srcs/ft_printf_x.c\
			srcs/ft_printf_x_maj.c\
			srcs/ft_whattodo.c\
			srcs/ft_whichflag.c\
			srcs/ft_whichparam.c

OBJS = $(addprefix objects/, $(FONCTIONS))

all: $(NAME)

$(NAME):
	@printf Make;
	@sleep 0.2;
	@printf .;
	@sleep 0.2;
	@printf .;
	@sleep 0.2;
	@printf .;
	@make -C libft/ re
	@gcc $(OPTIONS) $(SRCS)
	@ar rc $(NAME) $(FONCTIONS) libft/objects/*
	@ranlib $(NAME)
	@mv $(FONCTIONS) objects/
	@printf Done !;


clean:
	@rm -rf $(OBJS)
	@make -C libft/ clean


fclean: clean
	@rm -f $(NAME)
	@rm -f libft/libft.a

re: fclean all

.PHONY: all clean fclean re
