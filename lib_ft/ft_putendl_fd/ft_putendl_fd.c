/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:56:22 by charles           #+#    #+#             */
/*   Updated: 2022/11/03 13:57:42 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd);
{
    int i;
    char c;

    c = '\n';
    i = -1;
    while(s[++i])
        write(fd, &s[i], 1);
    write(fd, &c, 1);
}