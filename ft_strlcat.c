/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:19:54 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/08 11:56:08 by kczichowsky      ###   ########.fr       */
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

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	printf("%zu\n", dst_len);
	printf("%zu\n", size);

	while (src[i] != '\0' && (dst_len + 1) < size)
	{
		dst[dst_len] = (char)src[i];
		dst_len++;
		i++;
		printf("%zu\n", dst_len);
		printf("%zu\n", size);
	}
	if (dst_len < size && size != 0)
		dst[i] = '\0';
	
	printf("%s\n", dst);
	if (size > ft_strlen(dst))
		return (dst_len + src_len);
	else
		return (size + src_len);
}

int main()
{
    const char  src[] = "Hallo42K";
    char dst[20] = "AAA";
    size_t dstsize = 20;

    printf("Erster Test: %zu\n", ft_strlcat(dst, src, dstsize));

	const char  src1[] = "12345678";
    char dst1[20] = "AAA";
    size_t dstsize1 = 20;

    printf("Zweiter Test: %zu\n", strlcat(dst1, src1, dstsize1));

    return (0);
}