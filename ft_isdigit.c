/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:59:24 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/22 15:25:46 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>

int	ft_isdigit(int i)
{
	if ('0' <= i && i <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_isdigit('r'));
	return (0);
}
*/