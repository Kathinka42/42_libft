/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:36:03 by kczichowsky       #+#    #+#             */
/*   Updated: 2022/05/03 14:56:13 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	FT_LSTMAP
 *	------------ 
 *	DESCRIPTION
 *	Iterates the list ’lst’ and applies the function ’f’ on the content of
 *	each node. Creates a new list resulting of the successive applications of
 *	the function ’f’. The ’del’ function is used to delete the content of a
 *	node if needed.
 */

 #include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	temp = lst;
	while (lst)
	{
		
	}
}