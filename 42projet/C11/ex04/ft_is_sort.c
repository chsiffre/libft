/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsiffre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:18:52 by chsiffre          #+#    #+#             */
/*   Updated: 2022/08/18 16:32:22 by chsiffre         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (f(tab[i - 1] > f(tab[i])))
			return (0);
	}
	return (1);:
}