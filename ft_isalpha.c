/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:47:38 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/28 19:40:23 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The isalpha() function tests for any character for which ft_isupper or
// ft_islower is true.  The value of the argument must be representable as an
// unsigned char or the value of EOF.
// <ctype.h>

int	ft_isalpha(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_isalpha('e'));
	printf("%d\n", isalpha('e'));

	return (0);
}
*/
