/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:25:56 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/06 10:06:43 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns a copy of ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string, without whitespaces at the
// beginning or at the end of the string. If s has no whitespaces at the
// beginning or the end, the function returns a copy of s. If the allocation
// fails the function returns NULL.
// !set is the same like set==0;

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return ((char *)s1);
	while (*s1 == ' ' || *s1 == '\n' || *s1 == '\t')
		s1++;
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen((char *)s1);
	while (len > i && ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, i, len - i));
}

// int	main()
// {
// 	char const s1[30] = "12345678901234";
// 	char const set[30] = "124321";

// 	printf("%s\n", ft_strtrim(s1, set));
// 	//ft_strtrim(s1, set);
// }
