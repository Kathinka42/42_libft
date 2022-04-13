/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:19:54 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/12 10:04:50 by kczichowsky      ###   ########.fr       */
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
size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	
	ft_memcpy((dst + len_dst), src, (dstsize - len_dst - 1));
	//dst[dstsize + 1] = '\0';

		
	// if (ft_strlen(dst) >= dstsize + 1)
	// 	ft_memcpy((dst + len_dst), src, (dstsize - len_dst - 1));
	// else if (ft_strlen(dst) < dstsize)
	// 	ft_memcpy((dst + len_dst), src, )

	return (len_dst + len_src);
}
size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);

	if (dstsize <= len_dst)
		return (dstsize + len_src);
	ft_memcpy((dst + len_dst), src, (dstsize - len_dst - 1));
		return (len_dst + len_src);x
	dst[len_dst+len_src + 1] = '\0';
		
		
	//dst[dstsize + 1] = '\0';

		
	// if (ft_strlen(dst) >= dstsize + 1)
	// 	ft_memcpy((dst + len_dst), src, (dstsize - len_dst - 1));
	// else if (ft_strlen(dst) < dstsize)
	// 	ft_memcpy((dst + len_dst), src, )

	return (len_dst + len_src);
}


int main()
{
    const char  src[] = "12345678";
    char dst[20] = "AAA";
    size_t dstsize = 20;

    printf("%zu\n", ft_strlcat(dst, src, dstsize));

	const char  src1[] = "12345678";
    char dst1[20] = "AAA";
    size_t dstsize1 = 20;

    printf("%zu\n", strlcat(dst1, src1, dstsize1));

    return (0);
}