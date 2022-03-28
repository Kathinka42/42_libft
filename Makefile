# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 16:16:50 by kczichow          #+#    #+#              #
#    Updated: 2022/03/28 19:29:55 by kczichow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# per default, the command "make" only executes the command found after "all:"; every other command needs to be called explicitly:
# if there is a command inbetween, that creates an error, th program exits at this point;
# the Makefile only recompiles the files where it finds updates, not all files, which leads to a higher efficiency

NAME	= libft.a

FUNCTIONS	= ft_isalpha.c ft_isascii.c

# the following rule creates .o files from the .c input files
OBJS	=	${FUNCTIONS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

# remove files and do not display error message if it does not exist (-f);
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
