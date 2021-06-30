/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:30:07 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/29 17:39:15 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;

    new = malloc(sizeof(t_list) * (ft_lstiter(lst, f) + ft_lstdelone(lst, del)));
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