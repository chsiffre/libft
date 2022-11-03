/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsiffre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:18:52 by chsiffre          #+#    #+#             */
/*   Updated: 2022/08/18 16:32:22 by chsiffre         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
