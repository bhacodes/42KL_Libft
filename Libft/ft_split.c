/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 23:06:52 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/01 23:06:54 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		{
			while (s[i] && s[i] != c)
				i++;
			{
				if (s[i] == c)
					word++;	
			}
		}
	}
	word += 1;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	split = (char **)malloc(sizeof(char *) * (ft_wcount(s, c) + 1));
	if (!split)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		k = 0;
		if (i > j)
			split[k++] = ft_strndup(s + j, i - j);
	}
	split[k] = NULL;
	return (split);
}
