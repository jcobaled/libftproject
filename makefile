# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/19 23:51:30 by jcobaled          #+#    #+#              #
#    Updated: 2019/12/01 21:17:33 by jcobaled         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
		
NAME 	= libft.a

SRCS 	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c 
#		ft_strlcpy.c ft_strlcat.c \
#		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c */

OBJS	= ${SRCS:.c=.o}

FLAGS 	= -Wall -Werror -Wextra

HEADER 	= libft.h


all:	${NAME}

${NAME}: 
		gcc ${FLAGS} -c ${SRCS}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

 						
clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
