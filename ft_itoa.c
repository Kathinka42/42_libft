/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:16:19 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/06 17:59:47 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_is_negative(int *n, int *negative)
{
	if (n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}
char	*ft_itoa(int n)
{
	char *res;
	size_t	i;
	size_t	len;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"))
	if (n < 0)
	 {
		res[0] = "-";
		n = -n;
		i++; 
	}
	if (n > 9)
		printf("%d\n", n);
		ft_itoa(n/10);
	if (n >= '0' && n <= '9')
	 	res[i] = n + '0';
		 i++;
	return (res);
}

int main()
{
	int n = 120;
	ft_itoa(n);
}