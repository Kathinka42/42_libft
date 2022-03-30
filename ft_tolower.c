/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:10:27 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/30 12:48:12 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// convert upper-case letter to lower-case letter if there is any; else return
// parameter

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

// int	main()
// {
// 	int c;
// 	c = 1234;
// 	printf("%d\n", ft_tolower(c));
// 	int c1;
// 	c1 = 1234;
// 	printf("%d\n", tolower(c1));

// 	int d;
// 	d = -1;
// 	printf("%d\n", ft_tolower(d));
// 	int d1;
// 	d1 = -1;
// 	printf("%d\n", tolower(d1));

// 	int e;
// 	e = 65;
// 	printf("%d\n", ft_tolower(e));
// 	int e1;
// 	e1 = 65;
// 	printf("%d\n", tolower(e1));

// 	long f;
// 	f = 123456789012;
// 	printf("%d\n", ft_tolower(f));
// 	long f1;
// 	f1 = 123456789012;
// 	printf("%d\n", tolower(f1));

// 	return (0);
// }