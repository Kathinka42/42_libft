/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:55:08 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/31 13:27:42 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>

void	*ft_calloc(size_t	count, size_t	size)
{
	char	*buffer;

	buffer = malloc(count * size);
	if (buffer == NULL)
		return (buffer);
	ft_bzero(buffer, count * size);
	return (buffer);
}

// int main ()
// {
// 	size_t	count1;
// 	size_t	size;

// }