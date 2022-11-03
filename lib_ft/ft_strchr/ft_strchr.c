/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:40:06 by charles           #+#    #+#             */
/*   Updated: 2022/10/26 16:29:09 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char *ft_strchr(const char *s, int c)
{
	char *str;
	char a;

	a = (char) c;	
	while(*s)
	{
		if(*s == a)
		{
			str = (char *) s;
			return (str);
		}
    		s++;
  	}
}

int main()
{
    char a = 'a';
    char *s = "amoursa";
    printf("%s\n", ft_strchr(s, a));
	printf("%s", strchr(s, a));
    return(0);

}
