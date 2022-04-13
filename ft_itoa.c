/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:16:19 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 10:26:36 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a string representing the integer
// received as an argument. Negative numbers must be handled.

static size_t	count_intlen(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	intlen;
	long	nb;

	nb = n;
	intlen = count_intlen(n);
	if (n < 0)
		nb = -nb;
	res = malloc(sizeof(char) * (intlen + 1));
	if (res == NULL)
		return (NULL);
	res[intlen] = '\0';
	while (intlen--)
	{
		res[intlen] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
// int main()
// {
// 	// int n = -2147483646;
// 	int n = -214;
// 	// int n1 = -2147483649;
// 	// int n2 = 2147483647;
// 	// int n3 = 2147483648;
// 	printf("%s\n", ft_itoa(n));
// // 	ft_itoa(n1);
// // 	ft_itoa(n2);
// // 	ft_itoa(n3);
// }