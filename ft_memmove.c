/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:57:10 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/31 09:03:02 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The memmove() function copies len bytes from string src to string dst. The
//two strings may overlap;

void	*ft_memmove(void *dst1, const void *src, size_t len)
{
	size_t	i;
	char	*dst2;

	i = 0;
	dst2 = dst1;
	if (dst2 < (char *) src)
	{
		while (i < len)
		{
		dst2[i] = ((char *)src)[i];
		i++;
		}
	}
	else
	{
		while (len > 0)
		{
			dst2[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	return (dst1);
}

// int	main()
// {
// 	const char src1[30] = "Dies ist ein Test";
// 	char dst1[30] = "XXXOO";

// 	printf("%s\n", ft_memmove(dst1+1, src1, 10));

// 	const char src2[30] = "Dies ist ein Test";
// 	char dst2[30] = "XXXOO";

// 	printf("%s\n", memmove(dst2+1, src2, 10));

// 	return (0);
// }