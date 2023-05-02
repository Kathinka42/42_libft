/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_power_of_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:02:26 by kczichow          #+#    #+#             */
/*   Updated: 2023/05/02 10:32:44 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	FT_IS_POWER_OF_2
*	-----------------
*	DESCRIPTION
*	The function determines if a given number is a power of 2. It returns 1 if
*   the given number is a power of 2, otherwise it returns 0.
*/

#include "libft.h"

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			return (0);
	}
	return (1);
}
