/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsiffre <chsiffre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:03:10 by chsiffre          #+#    #+#             */
/*   Updated: 2022/11/24 13:42:45 by chsiffre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putstr(char *s)
{
	if (!s)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	if (write(1, s, ft_strlen(s)) == -1)
		return (-1);
	return (ft_strlen(s));
}

int	ft_putchar(int c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

int	ft_conv_hex(long int c, char *base)
{
	if (c < 0)
		return (ft_conv_hex(4294967296 + c, base));
	if (c < 16)
		return (ft_putchar(base[c % 16]));
	return (ft_conv_hex((c / 16), base) + ft_putchar(base[c % 16]));
}

int	ft_putnbr(int c)
{
	if (c == -2147483648)
		return (ft_putstr("-2147483648"));
	if (c < 0)
		return (ft_putchar('-') + ft_putnbr(-c));
	if (c >= 0 && c <= 9)
		return (ft_putchar(c + '0'));
	return (ft_putnbr(c / 10) + ft_putchar((c % 10) + '0'));
}
