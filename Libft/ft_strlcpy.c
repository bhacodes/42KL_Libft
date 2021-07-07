/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:19:52 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/04 20:43:16 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s_size;

	s_size = ft_strlen(src);
	if (src)
	{
		if (dstsize > 0)
		{
			if (s_size < dstsize - 1)
				ft_memcpy(dst, src, s_size + 1);
			else
			{
				ft_memcpy(dst, src, dstsize - 1);
				dst[dstsize - 1] = '\0';
			}
		}
		return (s_size);
	}
	return (0);
}
