/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:25:23 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/11 16:37:02 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of nodes in a list, with lst: The beginning of the
 * list. *lst contains the address of the head node and is therefore never
 * modified; we always use a temp variable to traverse the list;
 * @param lst 
 * @return int; the length of the list
 */

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*pos;

	count = 0;
	pos = lst;
	while(pos != NULL)
	{
		pos = pos->next;
		count++;
	}
	return (count); 
}