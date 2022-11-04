/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:54:11 by charles           #+#    #+#             */
/*   Updated: 2022/11/04 14:54:40 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int int_len(int n)
{
	int i;
	
	i = 1;
	while (n  >= 10)
	{	
		n = n / 10;
		i++;
	}
	return(i);

}

char *ft_itoa_2(int y, int n, int i)
{
	char *dest;
	if (n < 0)
		dest = malloc((i + 1) * sizeof(char));
	else if (n > 0)
		dest = malloc((i) * sizeof(char));
	else
		dest = malloc(2 * sizeof(char));
	dest[i--] = '\0';
	if (n == 0)
	{
		dest[0] = 48;
		return (dest);
	}
	if (n < 0)
		dest[0] = '-';
	else
		i--;
	while(y > 0)
	{
		dest[i--] = (y % 10) + '0';
		y = y / 10;
	}
	return (dest);
}

char *ft_itoa(int n)
{
	int i;
	int y;

	y = n;
	if (n < 0)
		y = -n;
	i = int_len(y) + 1;
	return (ft_itoa_2(y, n, i));
}

int main()
{
	int n = 1000;
	char *tab = ft_itoa(n);
	printf("%s", tab);
	free(tab);
}
