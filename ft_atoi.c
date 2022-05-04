/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:02:26 by kczichow          #+#    #+#             */
/*   Updated: 2022/05/04 09:15:04 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	FT_ATOI
*	-----------
*	DESCRIPTION
*	The function converts an ASCII string to an integer. It first checks for
*	leading whitespaces (auxiliary function is_whitespace) and sets the counter
*	to the first character that is not a whitespace. Secondly it checks for a
*	+ or - and sets the variable sign to either a positive or negative value
*	(auxiliary function set_sign). It converts the character to integer by
*	subtracting '0'.
*/

#include "libft.h"

static int	set_sign(const char *str, int i)
{
	int	sign;

	sign = 1;
	if (str[i] == '-')
			sign = sign * (-1);
	return (sign);
}

static int	is_whitespace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = is_whitespace(str);
	sign = set_sign(str, i);
	if (str[i] == '-' || str[i] == '+')
		i++;
	number = 0;
	while (ft_isdigit(str[i]) == 1)
	{
	number = number * 10 + str[i] - '0';
	i++;
	}
	return (number * sign);
}
