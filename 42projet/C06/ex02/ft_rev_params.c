#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}


int main (int ac, char **av)
{
	
	int count;
	count = 0;
	while (count + 1 < ac)
		count ++;
	while (count > 0 )
	{
		ft_putstr(av[count]);
		write(1, "\n", 1);
		count--;
	}

}
