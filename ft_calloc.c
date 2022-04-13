/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:55:08 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 12:58:24 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function allocates memory like malloc, but deletes everything that might
// already be written in there; 

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

// int main ()
// {
// 	size_t	count1;
// 	size_t	size;
// }
