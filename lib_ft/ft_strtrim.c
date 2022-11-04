/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:53:36 by charles           #+#    #+#             */
/*   Updated: 2022/11/04 14:54:40 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_check_set(char c, char *set)
{
	int i;
		
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int ft_count(char *str, char *set)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while(str[i])
	{
		if (ft_check_set(str[i], set) == 0)
			count++;
		i++;		 
	}
	return (count);
}

char *give_memory(char *str, char *set)
{
	int i;
	int j;
	int count;
	char *dest;
	
	j = 0;
	count = ft_count(str, set);
	i = 0;
	dest = malloc((count + 1) * sizeof(char));	
	while (str[i])
	{
		if (ft_check_set(str[i], set) == 0)
			dest[j++] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char *ft_strtrim(char const *s1, char const *set)
{
	return (give_memory((char *) s1, (char *) set));
}

int main()
{
	char *str = " ";
	char *set = " ";
	printf("%s", ft_strtrim(str, set));
	free(ft_strtrim(str, set));
}
