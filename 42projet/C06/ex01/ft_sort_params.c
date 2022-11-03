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

	int count = 1;
	while ( count < ac )
	{
		ft_putstr(av[count]);
		write(1, "\n", 1);
		count++;
	}

}

