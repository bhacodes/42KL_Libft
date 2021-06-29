/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:01:14 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/29 15:12:25 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char const      *fstr;
    unsigned int    i;

    fstr = malloc(sizeof(char) * (*f)(unsigned int, char) + 1);
    if (!fstr)
        return (NULL);
    while (s[i])
    {
        fstr[i] = f(i, s[i]);
        i++;
    }
    fstr[i] = '\0';
    return (fstr);
}