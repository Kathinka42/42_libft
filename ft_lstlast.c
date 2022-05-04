/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:21:55 by kczichow          #+#    #+#             */
/*   Updated: 2022/05/03 09:27:17 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	FT_LSTSIZE
 *	------------ 
 *	DESCRIPTION
 *	Returns the last node of the list, with lst: The beginning of the list.
 */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);

	while(lst != NULL)
	{
		if(lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
