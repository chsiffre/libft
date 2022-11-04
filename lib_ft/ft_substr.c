/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:46:30 by charles           #+#    #+#             */
/*   Updated: 2022/11/04 14:54:40 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *dest;
	unsigned int i;

	i = -1;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while(++i < len)
		dest[i] = s[start + i]; 
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char *s = "bonjour les enfants";
	unsigned int start = 12;
	char *tab = ft_substr(s, start, 12);
	printf("%s", tab);
	free(tab);
}
