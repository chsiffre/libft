/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:06:56 by charles           #+#    #+#             */
/*   Updated: 2022/10/31 13:06:57 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{	
	int len_tot;
	char *ret;
	int i;
	int j;
	
	i = 0;
	j = 0;
	len_tot = ft_strlen((char *) s1) + ft_strlen((char *) s2) + 1;
	ret = malloc(len_tot * sizeof(char));
	while(s1[i])
		ret[i++] = s1[i];
	while (s2[j])
		ret[i++] = s2[j++];
	ret[i] = '\0';
	return (ret);
}

int main()
{
	char *s1 = "bonjour ";
	char *s2 = "Monsieur";
	char *tab = ft_strjoin(s1, s2);
	printf("%s", tab);
	free(tab);
	
}
