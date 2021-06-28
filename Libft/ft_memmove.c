/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 21:45:09 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/28 22:13:38 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    char    dt;
    char    sc;
    
    if (dst == NULL && src == NULL)
        return (NULL);
    if (dst < src)
        ft_memcpy(dst, src, len);
    else if (dst > src)
    {
        i = len;
        dt = (char *)dst;
        sc = (char *)src;
        while (i > 0)
        {
            dt[i - 1] = sc[i - 1];
            i--;
        }    
    }
    return (dst);
}