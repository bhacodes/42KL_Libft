/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 08:45:03 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/30 11:38:04 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char const	*sub;

	i = 0;
	sub = malloc(len * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[i])
	{
		(size_t)start = 0;
		while (s[i] == sub[start] && start < len)
		{
			i++;
			start++;
		}
		i++;
	}
	sub[start] = '\0';
	return (sub);
}
