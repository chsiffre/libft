/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:30:12 by charles           #+#    #+#             */
/*   Updated: 2022/10/26 22:30:13 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	char *char_s1;
	char *char_s2;
	
	char_s1 = (char *) s1;
	char_s2 = (char *) s2;
	i = 0;
	while (char_s1[i] && char_s2[i] && char_s1[i] == char_s2[i] && n > 0)
	{
		i++;
		n--;
	}
	return(char_s1[i] - char_s2[i]);
}

int main()
{
	char *s1 = "bonhour";
	char *s2 = "bonjour";
	printf("%d\n", memcmp(s1, s2, 7));
	printf("%d", ft_memcmp(s1, s2, 7));
}
