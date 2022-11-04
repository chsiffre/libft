/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:08:10 by charles           #+#    #+#             */
/*   Updated: 2022/11/04 15:16:47 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

size_t ft_strlen(const char *s);
int ft_atoi(const char *str);
int isalnum(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int	ft_is_alpha(int c);
int ft_strlcat(char *dest, char *src, unsigned int size);
int ft_memcmp(const void *s1, const void *s2, size_t n);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void *ft_bzero(void *s, size_t n);
void *calloc(size_t nmemb, size_t size);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_itoa(int n);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strnstr(const char *s1, const char *s2, size_t n);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start,size_t len);

#endif
