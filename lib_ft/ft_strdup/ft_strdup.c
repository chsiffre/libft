/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:45:19 by charles           #+#    #+#             */
/*   Updated: 2022/10/27 12:45:21 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	printf("%d", i);
	return (i);

}

char *ft_strdup(const char *s)
{
	int i;
	char *dest;
	char *str;
	int count;

	str = (char *) s;
	i = 0;
	count = ft_strlen(str) + 1;
	dest = malloc(count * sizeof(char));
	if (!dest)
		return NULL;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}	
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char *s = "bonjour";
	printf("%s\n", strdup(s));
	printf("%s", ft_strdup(s));

}
