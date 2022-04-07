/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:51:03 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/07 14:54:01 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applies the function ’f’ on each character of the string passed as argument,
// passing its index as first argument. Each character is passed by address to
// ’f’ to be modified if necessary.

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
{
	char	*res;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (NULL);
	res = ft_strdup(s);
	if (res == NULL)
		return ((char *)s);
	while (res[i] != '\0')
	{
		res[i] = f(i, res[&i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}