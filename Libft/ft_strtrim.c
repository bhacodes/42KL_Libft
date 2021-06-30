/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:17:25 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/30 11:37:38 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*s2;
	size_t		i;

	s2 = malloc((ft_strlen(s1) - ft_strlen(set)) * sizeof(char) + 1);
	if (!s2)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1) && ft_strrchr(s1, set))
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
