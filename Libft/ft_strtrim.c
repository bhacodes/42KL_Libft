/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:17:25 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/01 21:13:39 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s2;
	size_t		i;

	s2 = malloc((ft_strlen(s1) - ft_strlen(set)) * sizeof(char) + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (*s1 && ft_strchr(set, *s1) && ft_strrchr(s1, *set))
	{
		s2[i] = (char)s1;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
