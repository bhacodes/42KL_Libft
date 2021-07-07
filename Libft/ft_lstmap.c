/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:30:07 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/07 16:13:17 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list			*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	while (lst != NULL)
	{
		new = f(lst->content);
		lst = lst->next;
	}
	if (del)
		del(new->content);
	return (new);
}
