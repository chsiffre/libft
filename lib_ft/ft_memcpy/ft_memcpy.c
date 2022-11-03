/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:54:49 by charles           #+#    #+#             */
/*   Updated: 2022/10/26 13:44:40 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    char *char_dest = (char *) dest;
    char *char_src = (char *) src;

    i = 0;
    if (dest == NULL)
        return (NULL);
    while (n > 0)
    {
        char_dest[i] = char_src[i];
        n--;
        i++;
    }
    return (dest);

}