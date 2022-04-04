/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:02:58 by kczichowsky       #+#    #+#             */
/*   Updated: 2022/04/04 12:31:31 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	const char		*substr;
	unsigned int	i;
	size_t 	slen;
	slen = ft_strlen(s);

	if(s == NULL)
		return (NULL);

	if(slen < len + (size_t)start)
		len = slen - (size_t)start;

	substr = malloc(sizeof(char const *) * len);
	if (substr == NULL)
		return (NULL);
	i = 0; 
	while (s[i] != '\0' && (size_t)start < slen)
	{
		ft_memcpy((char *)substr, (char *)s+start, len);
		{
			return ((char *)substr);
			i++;
		}	
	}
	return (NULL);
}

// int main ()
// {
//     char const str[] = "Dies ist ein Test";
//     unsigned int start = 5;
//     size_t  len = 0;

//     printf("%s\n", ft_substr(str, start, len));

//     return (0);
// }