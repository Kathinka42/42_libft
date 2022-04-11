/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:31:20 by kczichowsky       #+#    #+#             */
/*   Updated: 2022/04/11 12:47:20 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a new string, which is the result of
// the concatenation of ’s1’ and ’s2’.
// Fehler bei libftTester, wenn mindestens einer der Strings nicht leer ist.
// if Bedingung s1 || s2 == NULL bei git hub? ergibt keinen Sinn.

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*newstring;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	newstring = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (newstring == NULL)
		return (NULL);
	ft_memcpy(newstring, s1, len_s1);
	ft_memcpy((newstring + len_s1), s2, len_s2);
	newstring[len_s1 + len_s2] = '\0';
	return (newstring);
}

// int main()
// {
// 	char const s1[20] = "Hallo";
// 	char const s2[20] = "Wie geht es dir?";

// 	printf("%s\n", ft_strjoin(s1, s2));
// }