/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:30:07 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/30 11:11:55 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list			*new;
	unsigned int	size_bothf;

	size_bothf = (ft_lstiter(lst, f) + ft_lstdelone(lst, del);
	new = malloc(sizeof(t_list) * size_bothf));
	if (!new)
		return (NULL);
	while (lst != NULL)
	{
		new = ft_lstiter(lst, f);
		lst = lst->next;
	}
	if (del)
		ft_lstdelone(new, del);
	return (new);
}
