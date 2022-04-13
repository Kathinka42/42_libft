/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:52:18 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 11:33:05 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The isalnum() function tests for any character for which isalpha(3) or
// isdigit(3) is true.  The value of the argument must be representable as an
// unsigned char or the value of EOF.

int	ft_isalnum(int i)
{
	if (ft_isalpha(i) == 1 || ft_isdigit(i) == 1)
		return (1);
	return (0);
}
