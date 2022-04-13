/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:06:18 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 11:34:37 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The isascii() function tests for an ASCII character, which is any character
// between 0 and octal 0177 (dec 127) inclusive.

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	return (0);
}
