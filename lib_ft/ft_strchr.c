/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:40:06 by charles           #+#    #+#             */
/*   Updated: 2022/11/04 14:17:55 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
    return(0);

}
