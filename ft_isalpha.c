/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:47:38 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 11:27:34 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The isalpha() function tests for any character for which ft_isupper or
// ft_islower is true.  The value of the argument must be representable as an
// unsigned char or the value of EOF.
// ASCII A = 65, Z = 90; a = 97,  z = 122
// <ctype.h>

int	ft_isalpha(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
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
