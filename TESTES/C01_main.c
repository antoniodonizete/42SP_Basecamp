//ex03
#include <stdio.h>

int	main()
{
	int div;
	int mod;
	int *ptdiv = &div;
    int *ptmod = &mod;

    ft_div_mod(11,2,ptdiv,ptmod);
	printf("%i %i", div, mod);
}

//ex05





//ex06
#include <stdio.h>
int main(void)
{
	char str[] = "123456789";

	int len = ft_strlen(str);

	printf("%d\n", len);
}