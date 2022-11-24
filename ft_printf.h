/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsiffre <chsiffre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:25:48 by chsiffre          #+#    #+#             */
/*   Updated: 2022/11/19 11:23:23 by chsiffre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

size_t		ft_strlen(char *s);
int			ft_putstr(char *s);
int			ft_putchar(int c);
int			ft_conv_hex(long int c, char *base);
int			ft_putnbr(int c);
int			ft_conv_address(void *mem);
unsigned	int	ft_putnbr_u(unsigned int n);
int			ft_printf(const char *s, ...);
int			ft_printf_2(va_list args, char c);

#endif
