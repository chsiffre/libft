/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsiffre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:27:02 by chsiffre          #+#    #+#             */
/*   Updated: 2022/08/18 16:23:44 by chsiffre         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c scrs/ft_strcmp.c

NAME = libft.a

OBJS = ${SRCS:.c=.o}

HEADERS = includes/

.c.o :
	gcc -Wall -Wextra -Werror -I ${HEADERS} -c $< -o ${<:.c=.o}	

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

all : ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re : flclean all
