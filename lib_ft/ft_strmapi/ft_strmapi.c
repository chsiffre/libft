/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:13:24 by charles           #+#    #+#             */
/*   Updated: 2022/11/03 13:13:59 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		 i++;
	return(i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *dest;
	unsigned int i;
	int size;

	i = -1;
	size = ft_strlen((char *) s) + 1;
	dest = malloc(size * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[++i])
		dest[i] = f(i,s[i]);
	dest[i] = '\0';
	return (dest);
}
