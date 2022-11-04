/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:59:16 by charles           #+#    #+#             */
/*   Updated: 2022/11/04 14:03:08 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlenb(char *str)
{
    unsigned int    i;

    i = 0;
    while (*str++ != '\0')
    {    
        i++;
    }
    return (i);
}

int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    len_dst;

    i = 0;
    j = 0;
    len_dst = ft_strlen(dest);
    if (size == 0)
        return (ft_strlen((char *)src));
    while (dest[i] != '\0' && i < size)
        i++;
    while (src[j] != '\0' && i < size - 1)
        dest[i++] = src[j++];
    if (size != 0 && size >= len_dst)
        dest[i] = '\0';
    if (size < ft_strlen(dest))
        return (ft_strlen((char *)src) + size);
    else
        return (ft_strlen((char *)src) + len_dst);
}
