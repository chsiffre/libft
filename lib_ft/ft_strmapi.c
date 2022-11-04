/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:13:24 by charles           #+#    #+#             */
/*   Updated: 2022/11/04 14:22:55 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
