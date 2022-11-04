/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:55:07 by charles           #+#    #+#             */
/*   Updated: 2022/11/04 14:14:32 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
    int i;
    char *char_dest = (char *) dest;
    char *char_src = (char *) src;
    char *temp;

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