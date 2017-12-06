# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrown <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/28 11:41:58 by mbrown            #+#    #+#              #
#    Updated: 2017/12/04 19:24:06 by mbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

$(NAME):
	@gcc -c -Wall -Wextra -Werror ft_*.c
	@ar rc libft.a ft_*.o libft.h
	@ranlib libft.a

all: $(NAME)

clean:
	@rm -rf ft_*.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all
