/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:35:12 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/23 13:56:27 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst1, const void *src1, size_t n)
{
	size_t i;
	char	*dst2;
	//char	*src2;

	i = 0;
	dst2 = dst1;

	while (i < n)
	{
		dst2[i] = ((char *)src1)[i];
		i++;
	}
	return (dst1);
}

int	main()
{
	const char src1[20] = "Hello";
	char dst1[20] = "This is 42";

	printf("%s\n", ft_memcpy(dst1, src1, 20));
	
	const char src2[20] = "Hello";
	char dst2[20] = "This is 42";

	printf("%s\n", memcpy(dst2, src2, 20));

	return (0);
}