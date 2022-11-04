/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:04:56 by charles           #+#    #+#             */
/*   Updated: 2022/11/04 14:17:25 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count_str(char *str, char c)
{
	int i;
	int count;
	
	count = 0;
	i = 0;
	while (str[i])
	{	
		if (str[i] == c )
			count++;
		i++;
	}
	return (count + 1);
}

char *give_memory(char *str, int *j, char c)
{
	int i;
	int len;
	char *dest;
	
	len  = 0;
	i = 0;
	while (str[*j] == c)
		(*j)++;	
	while (str[*j + len] != c && str[*j + len])
		len++;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = str[*j];
		i++;
		(*j)++;
	}
	dest[i] = 0;
	return (dest);
}
char **ft_split(char const *s, char c)
{	
	int i;
	int j;
	char **ret;
	int nb_str;
	
	i = 0;
	j = 0;
	nb_str = ft_count_str((char *) s, c);
	ret = malloc((nb_str + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	while (i < nb_str)
	{
		ret[i] = give_memory((char *) s, &j, c);
		i++;
	}
	ret[i] = 0;
	return (ret);
}

int main()
{
	char *s = "bonjour les amis f a";
	char c = ' ';
	int i = 0;
	char **tab = ft_split(s, c);
	while (tab[i])
	{
		printf("%s\n", tab[i++]);
	}
}
