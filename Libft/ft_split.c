/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:35:01 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/30 11:29:01 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	**tot_subs(char const *s, char c)
{
	static int		*subs;
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		subs = 0;
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			subs++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	subs += 1;
	return (subs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**sep;

	i = 0;
	k = 0;
	sep = malloc((tot_subs(s, c) * sizeof(char)) + 1);
	if (!sep)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			sep[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	sep[k] = '\0';
	return (sep);
}
