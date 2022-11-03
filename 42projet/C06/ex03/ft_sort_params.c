#include <unistd.h>

void ft_swap(char **a, char **b)
{
	char *temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void ft_putstr(char *str)
{
	int i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}
int main(int ac, char **av)
{
	int i;
	i = 0;
	int j;
	while(i < ac - 1)
	{
		j = i + 1;
		while(j < ac)
		{
			if(ft_strcmp(av[i], av[j]) > 0)
				ft_swap(&av[i], &av[j]);
			j++;

		}
		i++;
	} 	
	i =0;
	while ( ++i < ac)
	{	
		ft_putstr(av[i]);
		write(1, "\n", 1);
	}
}
