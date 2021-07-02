/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zft_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:19:52 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/01 20:59:36 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s_size;

	s_size = ft_strlen(src);
	if (dstsize == 0)
		return (0);
	if (dstsize > s_size)
	{
		ft_strcpy(dst, src);
		return (s_size);
	}
	return (dstsize);
}
