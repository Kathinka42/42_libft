/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:23:48 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/30 15:03:22 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// kann im Moment die Funktion nicht aus der Lib aufrufen, Warum?

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
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
	return (0);
}

// int	main()
// {
// 	char dst1[20] = "Hello 42";
// 	const char src1[20] = "See you there";

// 	printf("own function%zu\n", ft_strlcpy(dst1, src1, 10));

// 	char dst2[20] = "Hello 42";
// 	const char src2[20] = "See you there";

// 	printf("lib function%zu\n", strlcpy(dst2, src2, 10));

// 	return (0);
// }
