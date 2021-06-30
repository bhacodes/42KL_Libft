/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:29:52 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/30 10:58:16 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**elem;

	elem = lst;
	while (lst->next != NULL)
	{
		ft_lstdelone(lst, del);
		lst = lst->next;
	}
	*elem = NULL;
}
