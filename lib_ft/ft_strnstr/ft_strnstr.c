/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:02:31 by charles           #+#    #+#             */
/*   Updated: 2022/10/26 23:02:33 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	if (!(*s2))
		return ((char *) s1);
	while(*s1 && n > 0)
	{
		if (*s1 == *s2)
		{
			i = 1;
			while (s2[i] == s1[i] && s2[i])
			{
				i++;
			}
			if (!s2[i])
				return ((char *) s1);
		}
		s1++;
		n--;
	}
	return (0);
}

int main()
{
	const char s1[] = "Fo Bar Baz";
	const char s2[] = "Bar"; 
	printf("%s", ft_strnstr(s1, s2, 4));
	

}
