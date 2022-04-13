/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:59:24 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 11:29:42 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The isdigit() function tests for a decimal digit character.
// ASCII '0' = 48, '9' = 57; 

int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
		return (1);
	return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_isdigit('-3'));
	printf("%d\n", isdigit('-3'));

	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", isdigit('2'));

	printf("%d\n", ft_isdigit('e'));
	printf("%d\n", isdigit('e'));

	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", isdigit(' '));

	return (0);
}
*/
