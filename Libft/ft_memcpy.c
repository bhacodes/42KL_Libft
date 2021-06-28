/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:50:03 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/28 21:50:02 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    char    d_mem;
    char    s_mem;

    i = 0;
    /* typecasted to char as char takes 1 byte 
    * this makes it possible for i to act as a counter */
    d_mem = (char *)dst;
    s_mem = (char *)src;
    while (i <= n)
    {
        d_mem[i] = s_mem[i];
        i++;
    }
    return (dst);
}