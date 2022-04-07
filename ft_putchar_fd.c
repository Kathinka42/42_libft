/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:18:24 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/07 13:32:46 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// outputs the character ’c’ to the given file descriptor instead of standard
// output.

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
