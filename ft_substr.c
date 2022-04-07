/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:02:58 by kczichowsky       #+#    #+#             */
/*   Updated: 2022/04/07 15:20:00 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	char	*substr;
	size_t	slen;

	slen = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > slen)
		return (ft_strdup(""));
	if (slen < len + (size_t)start)
		len = slen - (size_t)start;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_memcpy((char *)substr, (char *)s + start, len);
		substr[len] = '\0';
	return ((char *)substr);
	return (NULL);
}

// int main ()
// {
//     char const str[] = "Dies ist ein Test";
//     unsigned int start = 17;
//     size_t  len = 5;

//     printf("%s\n", ft_substr(str, start, len));

//     return (0);
// }