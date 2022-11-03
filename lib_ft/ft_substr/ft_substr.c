/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:46:30 by charles           #+#    #+#             */
/*   Updated: 2022/11/02 14:48:54 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *dest;
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while(i++ < start)
		s++;
	i = 0;
	while (s[i])
		dest[j++] = s[i++];
	dest[j] = '\0';
	return (dest);
}

int main()
{
	char *s = "bonjour les enfants";
	unsigned int start = 12;
	char *tab = ft_substr(s, start, 7);
	printf("%s", tab);
	free(tab);
}
