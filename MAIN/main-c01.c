// ex01
#include <stdio.h>

int main()
{
    int a;
    int *ptr;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;
    int *****ptr5;
    int ******ptr6;
    int *******ptr7;
    int ********ptr8;
    int *********ptr9;

    ptr = &a;
    ptr2 = &ptr;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    ptr9 = &ptr8;

    ft_ultimate_ft(ptr9);
    printf("%i",a);
}


//ex02
#include <stdio.h>
int main()
{    
    int a = 5;
    int b = 3;
    ft_swap(&a, &b);
    printf("%i ",a);
	printf("%i ",b);
    return (0);
}

// ex03
#include <stdio.h>

int main(void)
{   
	int tdv;
	int tmd; 
    int a;
	int b;
	int *div;
	int *mod;
	
	div = &tdv;
	mod = &tmd;

	a = 15;
	b = 7;

    ft_div_mod(a, b, div, mod);
		
		printf("Valor de a: %d , Valor de b: %d\n", a ,b);
		printf("Divisão: %d , Módulo: %d\n", *div, *mod);
		return (0);
}

// ex04

#include <stdio.h>
int main()
{    
    int a = 5;
    int b = 2;

    ft_ultimate_div_mod(&a,&b);
    printf("%i ",a);
	printf("%i ",b);
    return (0);
}

// ex05
#include <stdio.h>

int main()
{    
    char str[] = "Escreva uma frase";
    ft_putstr(str);
    return (0);
}

//ex06

#include <stdio.h>

int main()
{
	char str[] = "safnhdsk";

	int len = ft_strlen(str);

	printf("%d\n", len);
	return(0);
}