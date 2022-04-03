/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:02:58 by kczichowsky       #+#    #+#             */
/*   Updated: 2022/04/01 10:37:49 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const   *s, unsigned int	start, size_t	len)
{
	const char		*buffer;
	unsigned int	i;

	buffer = malloc(sizeof(char const *) * len);
	if (buffer == NULL)
		return (NULL);
	i = 0; 
	while (s[i] != '\0')
	{
		if(i == start)
		{
			ft_memcpy((char *)buffer, (char *)s+start, len);
			return ((char *)buffer);
		}	
		else
			i++;
	}
	return ("test");
}

int main ()
{
    char const str[] = "0123456789";
    unsigned int start = 2;
    size_t  len = 2;

    printf("%s\n", ft_substr(str, start, len));

    return (0);
}