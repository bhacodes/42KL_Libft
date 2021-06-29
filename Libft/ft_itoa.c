/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:41:54 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/29 15:03:50 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    char    *nb;
    int     i;

    nb = (char *)malloc(sizeof(char));
    if (!nb)
        return (NULL);
    nb = (char *)n;
    i = 0;
    while (nb[i])
    {
        if (nb[i] == '-')
        {
            ft_putchar('-');
        }
        i++;
    }
    nb[i] = '\0';
    return (nb);
}