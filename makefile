# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/19 23:51:30 by jcobaled          #+#    #+#              #
#    Updated: 2019/12/17 20:30:10 by jcobaled         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
		
NAME 	= libft.a

SRCS 	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

SRCS_BONUS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			  #ft_lstclear_bonus.c

OBJS	= ${SRCS:.c=.o}

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

FLAGS 	= -Wall -Werror -Wextra

HEADER 	= libft.h

all:	${NAME}

${NAME}: 
		@echo "Reading..."
		@gcc ${FLAGS} -c ${SRCS}
		@echo "Linking..."
		@ar rc ${NAME} ${OBJS}
		@echo "Compiling..."
		@ranlib ${NAME}

bonus:
	@echo "Reading bonus sources..."
	@gcc ${FLAGS} -c $(SRCS_BONUS)
	@echo "Linking bonus objects..."
	@ar rc ${NAME} ${OBJS_BONUS}
	@echo "Compiling bonus files..."
	@ranlib ${NAME}
 						
clean:
		@echo "Cleaning..."
		@rm -f ${OBJS} ${OBJS_BONUS}

fclean: clean
		@rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus
