/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:52:04 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/25 13:57:09 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// locate the last occurence of c in string str, whereas the terminating
// null is considered part of the string; int i is converted to char;

char	*ft_strrchr(char *str, int c)
{
	int i;

	i = 0;
	while (str)
	{
		if((char)c == str[i])
		{
			return (&str[i]);
		}
	}

}