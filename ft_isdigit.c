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

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
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
