/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:40:53 by kczichow          #+#    #+#             */
/*   Updated: 2023/05/02 10:37:01 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	UPDATE_REMAINDER
*	-----------------
*	DESCRIPTION
*	Function takes result from the two preceding auxiliary functions as input.
*	It allocates memory for the new remainder (the existing remainder (temp) is
*	being freed after executing this function in get_next_line). Characters
*	after the \n are written into the new remainder, which is then terminated
*	with a terminating \0.
*	If the new remainder happens to be empty, it is immediately freed and
*	NULL is returned to the calling function.
*/

char	*update_remainder(char	*temp, char *line)
{
	size_t	count;
	size_t	j;
	char	*update;

	count = 0;
	j = 0;
	update = malloc(sizeof(char *)
			* (ft_strlen_m(temp) - ft_strlen_m(line) + 1));
	if (update == NULL)
		return (NULL);
	while (temp[count] != '\n' && temp[count] != '\0')
		count++;
	if (temp[count++] == '\n')
		while (temp[count] != '\0')
			update[j++] = temp[count++];
	update[j] = '\0';
	if (update[0] == '\0')
	{
		free(update);
		return (NULL);
	}
	return (update);
}

/*	RETURN_LINE
*	------------
*	DESCRIPTION
*	Function takes the result of the preceding auxiliary function as input.
*	It allocated memory for the line to be returned to the main function.
*	It iterates through the string and writes into the new string until it
*	either reaches \n or the end of the string (last line). Finally it
*	adds - if there is a newline - the newline character to the string.
*	And/ or the terminating \0.
*/

char	*return_line(char	*temp)
{
	size_t	count;
	char	*line;

	count = 0;
	while (temp[count] != '\n' && temp[count] != '\0')
		count++;
	line = malloc((sizeof(char)) * (count + 2));
	if (line == NULL)
		return (NULL);
	count = 0;
	while (temp[count] != '\n' && temp[count] != '\0')
	{
		line[count] = temp[count];
		count++;
	}
	if (ft_strchr_m(temp, '\n'))
		line[count++] = '\n';
	line[count] = '\0';
	return (line);
}

/*	READ_TEXT_AND_JOIN
*	-------------------
*	DESCRIPTION
*	Function takes the file descriptor and the static variable from the last
*	function call as input. It allocates memory for the bytes to be read from
*	the file descriptor. It reads from the file descriptor and adds the newly
*	read bytes to the end of existing static variable. It does that repeatedly
*	until the string in the static variable remainder contains a \n or until
*	there is nothing more to be read from the fd (readreturn = 0). It is
*	important to add a \0 at the end of the buffer to define it as string and
*	to able to use it in the subsequent functions.
*	The function returns a string that contains min one \n unless it is the
*	last line.
*	A temporary variable is used to make sure all allocated memory that is
*	no longer in use, is freed properly.
*/

char	*read_text_and_join(int fd, char *remainder)
{
	char		*buffer;
	char		*temp;
	int			readreturn;

	readreturn = 1;
	buffer = malloc((sizeof(char)) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (!(ft_strchr_m(remainder, '\n')) && readreturn != 0)
	{
		readreturn = read(fd, buffer, BUFFER_SIZE);
		if (readreturn == -1)
		{
			free (buffer);
			return (NULL);
		}
		buffer[readreturn] = '\0';
		temp = remainder;
		remainder = ft_strjoin_m(temp, buffer);
		free (temp);
	}
	free (buffer);
	return (remainder);
}

/*	GET_NEXT_LINE_BONUS
*	-------------------
*	DESCRIPTION
*
*	-------------BONUS---------------
*	The function can manage multiple file descriptors at the same time. For
*	example if you can read from the file descriptors 3, 4 and 5, you should be
*	able to read from a different fd per call without losing the reading thread
*	of each file descriptor or returning a line from another fd. It means that
*	you should be able to call get_next_line() to read from fd 3, then fd 4,
*	then 5, then once again 3, once again 4, and so forth.
*	The only amendment in the code in comparison to the mandatory part is that
*	the static variable is defined as static array.
*	Linux systems limit the number of file descriptors that any one process may
*	open to 1024 per process.
*	----------------------------------
*	Function returns a line read from a file descriptor. It first checks
*	whether the file descriptor exists and the buffer_size (i.e. the number
*	of bytes that are read from the file descriptor) is greater than zero.
*	It then calls various auxiliary functions to 1. read from the given
*	file descriptor, join with the remainder from the last function call
*	and write this into a new variable temp.
*	2. Extract the line to be returned from the temp variable and 3. update
*	the remainder.
*	A static variable is used, because it keeps the value across various
*	function calls. The content of static variables is stored in the data
*	memory area.
*	When there is no more new line to be returned, the function returns NULL.
*/

char	*get_next_line(int fd)
{
	static char	*remainder[1024];
	char		*line;
	char		*temp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	temp = read_text_and_join(fd, remainder[fd]);
	if (temp == NULL)
		return (NULL);
	line = return_line(temp);
	remainder[fd] = update_remainder(temp, line);
	free (temp);
	if (ft_strlen_m(line) > 0)
		return (line);
	free(line);
	return (NULL);
}
