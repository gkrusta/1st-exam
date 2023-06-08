#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc != 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if (argv[2][0] == '+')
			printf("%d\n", a + b);
		else if (argv[2][0] == '-')
			printf("%d\n", a - b);
		else if (argv[2][0] == '/')
			printf("%d\n", a / b);
		else if (argv[2][0] == '*')
			printf("%d\n", a * b);
		else if (argv[2][0] == '%')
			printf("%d\n", a % b);
	}
	return (0);
}
