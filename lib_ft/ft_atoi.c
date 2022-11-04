/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:18:10 by charles           #+#    #+#             */
/*   Updated: 2022/11/04 14:54:40 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int count;
	int sign;
	int res;

	sign = 1;
	count = 0;
	res = 0;
	while((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign *= -1;
			count++;
		}
		if (count > 1)
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10;
		res = res + *str - '0';
		str++;
	}
	return (res * sign);
}


int main()
{
	char *str = "		 		+432454gfdssfvd";
	printf("%d\n", atoi(str));
	printf("%d", ft_atoi(str));

}
