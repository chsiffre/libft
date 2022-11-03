#include <unistd.h>

void ft_swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a= *b;
	*b = temp;
}

int ft_strcount(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

char rev_print(char *str)
{
	int size;
	size = ft_strcount(str);
	while(size >= 0)
	{
		write(1, &str[size], 1); 
		size--;
	}
	return(*str);
}


int main()
{
	char *str = "dub0 a POIL";
	rev_print(str);
}	
