/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:23:48 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/25 10:52:56 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// kann im Moment die Funktion nicht aus der Lib aufrufen, Warum?

int	ft_strlen(char *str);
/*{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}
*/
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t i;

	i = 0;

	while (i < dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return (ft_strlen(src));
}

int	main()
{
	char dst1[20] = "Hello 42";
	char src1[20] = "See you there";

	printf("own function%u\n", ft_strlcpy(dst1, src1, 10));

	char dst2[20] = "Hello 42";
	char src2[20] = "See you there";

	printf("lib function%u\n", strlcpy(dst2, src2, 10));

	return (0);
}
