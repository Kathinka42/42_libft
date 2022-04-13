/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:16:19 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 06:44:10 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a string representing the integer
// received as an argument. Negative numbers must be handled.
// how could the count_digits be resolved recursively?

static int	count_digits(int n)
{
	int count;
	
	if(n > 0)
	{
		count = 0;
		while (n > 0)
		{
			n = n/10;
			count++;
		}
	}
	if(n < 0)
	{
		count = 1;
		while (n < 0)
		{
			n = n/10;
			count++;
		}
	}
	printf("%d\n", count);
	return (count);
}
char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;
	size_t	intlen;

	i = 0;
	intlen = count_digits(n);
	if (n < 0)
	{
		n = -n;
		i = 1;
		//res[0] = '-';
	}
	res = malloc(sizeof(char) * (intlen + i));
	if(res == NULL)
		return (NULL);
	printf("%zu\n", intlen);
	res[intlen + i] = '\0';
	while (intlen--)
	{
		//printf("%zu\n", intlen);
		res[intlen] = n % 10 + '0';
		n = n / 10;
	}
	if (i == 1)
		res[0] = '-';
	printf("%s\n", res);	
	return (res);
}

// int main()
// {
// 	int n = 1234567890;
// 	ft_itoa(n);
// }