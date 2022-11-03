#include <unistd.h>

int is_a(char c)
{
	if (c == 'a')
		return(1);
	
	return(0);
}

void test(char c)
{

	if (is_a(c))
		write(1, "a", 1);

}


int main()
{

	char c = 'a';
	test(c);

}
