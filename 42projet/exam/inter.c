#include <unistd.h>
int ft_check(char *str1, char c, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (c == str1[i])
			return(0);
		i++;
	}	
	return (1);
}

void	ft_inter(char *str1, char *str2)
{
	int	i = 0;
	int	j = 0;

	while (str1[i])
	{	
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j] && ft_check(str1, str1[i], i))
			{
				write(1, &str1[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
	write (1, "\n", 1);	
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_inter(av[1], av[2]);
		
	}
	else
		write(1, "\n", 1);
}
