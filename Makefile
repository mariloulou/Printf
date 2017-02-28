# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 08:03:35 by mcassar           #+#    #+#              #
#    Updated: 2017/02/28 02:30:26 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c $(FLAGS)
FONCTIONS =	



SRCS =		srcs/

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
	@printf "\x1b[32mLibprintf.a file is being created"
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
