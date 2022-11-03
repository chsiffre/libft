/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:48:58 by charles           #+#    #+#             */
/*   Updated: 2022/10/26 16:49:00 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	char *str;
	char a;
	int i;
	
	i = 0;
	a = (char ) c;
	while(*s)
	{
		i++;
		s++;
	}
	while (i > 0)
	{
		if(*s == a)
		{
			str = (char *) s;
			return (str);
		}
		s--;
	}

}

int main()
{
	int a = 'a';
	char *str = "maouars";
	printf("%s\n", strrchr(str ,a));
	printf("%s", ft_strrchr(str, a));
}
