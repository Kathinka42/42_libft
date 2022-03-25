/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:57:10 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/23 14:13:13 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst1, const void *src1, size_t len)
{
	size_t i;
	char *dst2;

	i = 0;
	dst2 = dst1;

	while (i < len)
	{
		dst2[i] = ((char *)src1)[i];
		i++;
	}
	return (dst1);
}

int	main()
{
	const char src1[30] = "Dies ist ein Test";
	char dst1[20] = "XXXXXXXXXXXXX";

	printf("%s\n", ft_memmove(dst1, src1, 30));

	const char src2[30] = "Dies ist ein Test";
	char dst2[20] = "XXXXXXXXXXXXX";

	printf("%s\n", ft_memmove(dst2, src2, 30));

	return (0);
}