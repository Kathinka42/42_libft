/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:25:56 by kczichow          #+#    #+#             */
/*   Updated: 2022/11/24 10:25:00 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	FT_STRTRIM
*	-------------
*	DESCRIPTION
*	The function returns a copy of ’s1’ with the characters specified in
*	’set’ removed from the beginning and the end of the string. If s has no
*	whitespaces at the beginning or the end, the function returns a copy of s.
*	If the allocation fails the function returns NULL.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return ((char *)s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen((char *)s1);
	while (len > i && ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, i, len - i));
}
