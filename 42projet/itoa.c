

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsiffre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:27:02 by chsiffre          #+#    #+#             */
/*   Updated: 2022/08/18 16:23:44 by chsiffre         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int ft_intlen(int nb)
{
	int i;
	i = 0;
	if (nb < 0)
		nb = -nb;
	while (nb * 10 > 9)
	{
		nb  = nb / 10;
		i++;
	}	
	return (i);
}

char *ft_itoa(int nb)
{
	char *str;
	int size;
	int n;

	n = nb;	
	size = ft_intlen(nb);
	if (nb < 0)
		str = malloc((size + 2) * sizeof(char));
	else
		str = malloc((size + 1) * sizeof(char));

	if (n < 0)
	{
		size++;
		str[size] = '\0';
		nb = -nb;
	}
	else if (size >= 0)
	{
		str[size] = '\0';
		if (nb == 0)
		{
			str[0] = 48;
			return (str);
		}
	}
	while(size--)
	{
		str[size] = (unsigned int)nb % 10 + '0';
		(unsigned int)nb = (unsigned int)nb / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}


int main()
{
	int nb = -2147483648;
	printf("%s", ft_itoa(nb));
}
