#include <unistd.h>

void ft_putchar(void);

int main(void)
{
	ft_putchar();
	ft_putchar();	
	return(0);
		
	ft_putchar();
}

void	ft_putchar(void)
{	
	write(1, "v", 1);
}   

