/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:48:30 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/07/01 15:56:01 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(unsigned int nb)
{
	size_t	len;

	len = 1;
	while (nb < 0)
		len++;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	len;

	len = ft_intlen(n) + 1;
	num = malloc(sizeof(char) * len);
	if (!num)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(num, "-2147483648"));
	if (n == 0)
		return (ft_strcpy(num, "0"));
	num[--len] = '\0';
	if (n < 0)
	{
		n *= -1;
		num[0] = '-';
	}
	while (len && n)
	{
		num[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}
