/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:25:56 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/04 15:14:55 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns a copy of ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.

char	*ft_strtrim(char const *s1, char const *set)
{
	char *s1_trim;
	size_t 	i;
	
	i = 0;
	s1_trim = malloc(sizeof(char *) * ft_strlen(s1));
	if(s1_trim == NULL)
		return (NULL);

	s1_trim = (char *)s1;
	while (i < ft_strlen(set))
	{
		ft_strchr(s1_trim, (int)set[i]);
		i++;
		s1_trim++;
	}
	while ((ft_strlen(set)+1))
		ft_strchr(s1_trim, (int)set[ft_strlen(s1_trim)])

	return (s1_trim);
}

// int	main()
// {
// 	char const s1[30] = "Dies ist ein Test";
// 	char const set[30] = "Diest";

// 	printf("%s\n", ft_strtrim(s1, set));
// }
