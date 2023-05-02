/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:02:26 by kczichow          #+#    #+#             */
/*   Updated: 2023/05/02 10:31:37 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	FT_ATOI_BASE
*	-------------
*	DESCRIPTION
*	The function converts the string argument str (base N <= 16) to an integer
*   (base 10) and returns it. The characters recognized in the input are:
*   0123456789abcdef, which are trimmed according to the requested base. For
*   example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef"
*   Uppercase letters are also recognized: "12fdb3" is the same as "12FDB3".
*   Minus signs ('-') are interpreted only if they are the first character of
*   the string.
*/

#include "libft.h"

int	validate_input(char c, int base)
{
	const char	str1[17] = "0123456789abcdef";
	const char	str2[17] = "0123456789ABCDEF";

	while (base--)
	{
		if (str1[base] == c || str2[base] == c)
			return (1);
	}
	return (0);
}

int	value_of(char c)
{
	int	val;

	val = 0;
	if (c >= 'A' && c <= 'F')
		val = c - 'A' + 10;
	else if (c >= 'a' && c <= 'f')
		val = c - 'a' + 10;
	else if (c >= '0' && c <= '9')
		val = c - '0';
	return (val);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		i;
	long	number;
	long	sign;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && validate_input(str[i], str_base))
	{
		if ((number * sign) < INT32_MIN)
			return (0);
		else if ((number * sign) > INT32_MAX)
			return (-1);
		number = number * str_base + value_of(str[i]);
		i++;
	}
	return ((int)(number * sign));
}
