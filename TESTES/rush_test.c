#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y)
{
	int	c;
	int	l;

	c = 1;
	l = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			if ((c == 1 || c == x) && (l == 1 || l == y))
				printf("%c", 'o');
			else if ((c > 1 || c < x) && (l == 1 || l == y))
				printf("%c", '-');
			else if ((c == 1 || c == x) && (l > 1 || l < y))
				printf("%c", '|');
			else if ((c > 1 || c < x) && (l > 1 || l < y))
				printf("%c", '-');
			c++;
		}
		printf("%c", '\n');
		c = 1;
		l++;
	}
}

int	main(void)
{
	rush(3, 3);
	return (0);
}
