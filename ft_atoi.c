/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:02:26 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/31 13:34:07 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert ASCII string to integer, ignore leading whitespaces;
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12
		|| str[i] == 13)
		i++;
	if (str[i] == '-')
	{
		sign = sign * (-1);
		i++;
	}
	else
	{
		if (str[i] == '+')
			i++;
	}
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
	number = number * 10 + str[i] - '0';
	i++;
	}
	return (number * sign);
}

// int main()
// {
//   const char str[20] = " -h12345678";

//   printf("%d\n", ft_atoi(str));
//   printf("%d\n", atoi(str));

//   const char str1[20] = "5678";

//   printf("%d\n", ft_atoi(str1));
//   printf("%d\n", atoi(str1));

//   const char str2[20] = "-12345678";

//   printf("%d\n", ft_atoi(str2));
//   printf("%d\n", atoi(str2));

//   const char str3[20] = " ";

//   printf("%d\n", ft_atoi(str3));
//   printf("%d\n", atoi(str3));

//   const char str4[20] = "hallo 42";

//   printf("%d\n", ft_atoi(str4));
//   printf("%d\n", atoi(str4));

//   return (0);
// }