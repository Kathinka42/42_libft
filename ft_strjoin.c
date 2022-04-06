/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:31:20 by kczichowsky       #+#    #+#             */
/*   Updated: 2022/04/06 09:49:02 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a new string, which is the result of
// the concatenation of ’s1’ and ’s2’.
// Fehler bei libftTester, wenn mindestens einer der Strings nicht leer ist.

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*newstring;

	newstring = malloc(sizeof(char *) * ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (newstring == NULL)
		return (newstring);
	ft_memcpy(newstring, s1, ft_strlen(s1));
	ft_memcpy(newstring + ft_strlen(s1), s2, ft_strlen(s2));
	newstring[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (newstring);
}

// int main()
// {
// 	char const s1[20] = "Hallo 42";
// 	char const s2[20] = "Ich bin hier";

// 	printf("%s\n", ft_strjoin(s1, s2));
// }