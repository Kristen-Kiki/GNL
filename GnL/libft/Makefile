# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/08 13:49:08 by kmcgrego          #+#    #+#              #
#    Updated: 2019/07/18 14:30:20 by kmcgrego         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPILE = gcc -c -Wall -Werror -Wextra $(SOURCE)
OBJECT = *.o
SOURCE = *.c

all: $(NAME)

$(NAME):
	$(COMPILE)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECT)

fclean:	clean
	/bin/rm -f $(NAME)
#	/bin/rm -R a.out

re:	fclean all
