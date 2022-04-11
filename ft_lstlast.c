/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:21:55 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/11 16:26:44 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief lst: The beginning of the list. Returns the last node of the list;
 * 
 * @param lst 
 * @return t_list*; Last node of the list 
 */
t_list	*ft_lstlast(t_list *lst)
{
	int		count;
	t_list	*pos;

	while(pos != NULL)
	{
		pos->next = pos;
		count++;
	}
	return 
}