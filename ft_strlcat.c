/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:19:54 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 12:57:41 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// function appends string src to the end of dst.  It will append at most
// size - strlen(dst) - 1 characters.  It will then NUL- terminate, unless
// size is 0 or the original dst string was longer than dstsize (in practice
// this should not happen as it means that either dstsize is incorrect or that
// dst is not a proper string)
//
// Characters from string src are appended to string dst. The dstsize argument
// is equal to the size of the dst buffer, which caps the number of characters
// copied to this size, minus one for the null character.

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destlen >= dstsize)
		return (dstsize + srclen);
	while (src[i] && (destlen + i) < (dstsize - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

// int main()
// {
//     const char  src[] = "Hallo42K";
//     char dst[25] = "AAA";
//     size_t dstsize = 19;

//     printf("Erster Test: %zu\n", ft_strlcat(dst, src, dstsize));

// 	const char  src1[] = "Hallo42K";
//     char dst1[25] = "AAA";
//     size_t dstsize1 = 19;

//     printf("Zweiter Test: %zu\n", strlcat(dst1, src1, dstsize1));

//     return (0);
// }