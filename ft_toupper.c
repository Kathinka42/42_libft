/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:54:24 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/25 11:20:00 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c<= 'z')
		return (c - 32);
	return (c);	
}

int	main ()
{
	int c;
	c = 1234;
	printf("%d\n", ft_toupper(c));
	int c1;
	c1 = 1234;
	printf("%d\n", toupper(c1));
	
	int d;
	d = -1;
	printf("%d\n", ft_toupper(d));
	int d1;
	d1 = -1;
	printf("%d\n", toupper(d1));
	
	int e;
	e = 115;
	printf("%d\n", ft_toupper(e));
	int e1;
	e1 = 115;
	printf("%d\n", toupper(e1));
	
	long f;
	f = 123456789012;
	printf("%d\n", ft_toupper(f));
	long f1;
	f1 = 123456789012;
	printf("%d\n", toupper(f1));

	return (0);
}