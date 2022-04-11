/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:19:54 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/11 06:39:22 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// function appends string src to the end of dst.  It will append at most
// dstsize - strlen(dst) - 1 characters.  It will then NUL- terminate, unless
// dstsize is 0 or the original dst string was longer than dstsize (in practice
// this should not happen as it means that either dstsize is incorrect or that
// dst is not a proper string)

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;
	size_t	dstsize;

	dstsize = ft_strlen(dst);
	i = 0;
	j = 0;

	if (size == 0 || dstsize +1 > size)
		return (dstsize + ft_strlen(src));
	while(dst[i] != '\0' &&  i < size)
		i++;
	while (j < (size - dstsize -1) && src[j] != '\0')
	{
		dst[i] = (char)src[j];
		i++;
		j++;
	}
	if (i < size)
		dst[i] = '\0';
	return (dstsize + ft_strlen(src));
}

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t  i;
	size_t  j;
	size_t origdstsize;

	origdstsize = ft_strlen(dst);
	i = 0;
	j = 0;

	if (dstsize == 0 || origdstsize > dstsize)
		return (origdstsize + ft_strlen(src));
	while(dst[i] != '\0' && dstsize-- != 0)
		i++;
	while (j <= (dstsize - origdstsize -1) && src[j] != '\0')
	{
		dst[i] = (char)src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (origdstsize + ft_strlen(src));
}

// int main()
// {
//     const char  src[] = "12345678";
//     char dst[20] = "AAA";
//     size_t dstsize = 20;

//     printf("%zu\n", ft_strlcat(dst, src, dstsize));

// 	const char  src1[] = "12345678";
//     char dst1[20] = "AAA";
//     size_t dstsize1 = 20;

//     printf("%zu\n", strlcat(dst1, src1, dstsize1));

//     return (0);
// }