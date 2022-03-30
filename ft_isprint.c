/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:13:04 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/30 15:20:38 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	return (0);
}

// int main()
// {
// 	printf("%d\n", ft_isprint(59));
// 	printf("%d\n", isprint(59));

// 	printf("%d\n", ft_isprint(57));
// 	printf("%d\n", isprint(57));

// 	return (0);
// }