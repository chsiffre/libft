/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsiffre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:18:52 by chsiffre          #+#    #+#             */
/*   Updated: 2022/08/18 16:32:22 by chsiffre         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	char *str;

	i = 0;
	str = malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (tab[i])
	{
		str[i] = f(tab[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}


