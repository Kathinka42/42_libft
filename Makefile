# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 16:16:50 by kczichow          #+#    #+#              #
#    Updated: 2022/04/07 14:58:01 by kczichow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# per default, the command "make" only executes the command found after "all:"; every other command needs to be called explicitly:
# if there is a command inbetween, that creates an error, the program exits at this point;
# the Makefile only recompiles the files where it finds updates, not all files, which leads to a higher efficiency

NAME	= libft.a

FUNCTIONS	= ft_isalpha.c \
				ft_isdigit.c \
				ft_isascii.c \
				ft_isalnum.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strmapi.c \
				ft_putchar_fd.c
				
# the following rule creates .o files from the .c input files
OBJS	=	${FUNCTIONS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

# remove files and do not display error message/ stop if it does not exist (-f);
RM	= rm -f

# the following command changes the original underlying rule in the Makefile to compile with the flags;
.c.o:	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# The ${OBJS} in the first line is a precondition to execute the ${NAME};
${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:	fclean	all

.PHONY: all clean fclean re
