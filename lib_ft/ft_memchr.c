/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:10:47 by charles           #+#    #+#             */
/*   Updated: 2022/11/04 14:54:40 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char a;
	char *str = (char * ) s;
		
	a = (char ) c;
	while (n > 0)
	{
		if (*str == c)
			return (str);
		str++;
		n--;
	}
}

int main()
{
	char str[] = "bonjour";
	int c = 'j';
	char *occ = memchr(str, c ,7);
	char *ft_occ = ft_memchr(str, c ,7);
	printf("%s\n", occ);
	printf("%s", ft_occ);
	
}
