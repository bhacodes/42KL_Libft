/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:30:12 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/29 10:30:55 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        ft_putstr_fd("-2147483648");
    if (n < 0)
    {
        ft_putchar_fd('-');
        ft_putnbr_fd(n * -1);
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10);
        ft_putchar_fd((n % 10) + '0');
    }
    else
        ft_putchar_fd(n + '0');
}