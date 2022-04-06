/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:59:43 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/05 10:34:37 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// save a copy of a string;
// The strdup()function allocates sufficient memory for a copy of the string s,
// does the copy, and returns a pointer to it.  The pointer may
// subsequently be used as an argument to the function free(3).

char	*ft_strdup(const char *s1)
{
	char	*dupl;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	dupl = malloc(sizeof(char) * (len + 1));
	if (dupl == NULL)
		return (NULL);
	else
		i = 0;
	while (i < len && s1[i] != '\0')
	{
		dupl[i] = s1[i];
		i++;
	}
	dupl[i] = '\0';
	i = 0;
	return (&dupl[i]);
}

// int main()
// {
//   char s1[] = "Hallo 42";

//   printf("%s\n", ft_strdup(s1));
//   printf("%s\n", strdup(s1));

// }
// char *variable;
// variable = malloc(sizeof(char) * (len + 1));
// char *variable;

// bei string len +1 wegen terminating 0
// immer sizeof nutzen fuer Uebersichtlichkeit
// immer neuen Char Pointer definieren, der dann auf den Ort Heap zeigt