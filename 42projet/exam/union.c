#include <unistd.h>
int ft_check(char *s, char c)
{
	int i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (0);
		i++;
	}
	return (1);
}


int ft_check2(char *s, char c, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (c == s[i])
			return (0);
		i++;
	}
	return (1);
}


void	ft_union(char *s1, char *s2)
{
	int i = 0;
	while (s1[i])
	{
		if (ft_check2(s1, s1[i], i))
			write (1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (ft_check(s1, s2[i]))
		{
			if (ft_check2(s2, s2[i], i))
				write(1, &s2[i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
}


int main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	else
		write (1, "\n", 1);
}
