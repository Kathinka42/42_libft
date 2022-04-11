/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:12:48 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/11 16:37:16 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new node. The member variable
 * ’content’ is initialized with the value of the parameter ’content’.
 * The variable ’next’ is initialized to NULL.
 * 
 * @param content 
 * @return t_list* 
 */

t_list	*ft_lstnew(void *content)
{
	t_list *newnode;

	newnode = malloc(sizeof(t_list));
	if (newnode == NULL)
		return (NULL);
	newnode->content = content; // equals to (*newnode).content = content;
	newnode->next = NULL;
	return (newnode);
}	

