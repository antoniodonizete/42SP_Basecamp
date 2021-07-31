
// ex00
#include <stdio.h>
int main()
{    
    int *ptr;
    ft_ft(ptr);
    printf("%i", *ptr);
    return (0);
}

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
// ex02
#include <stdio.h>

int main()
{    
    int a = 5;
    int b = 3;
    ft_swap(&a, &b);
    printf("%i ",a);
    return (0);
}
// ex03
#include <stdio.h>

int main()
{    
    int div;
    int a = 4;
    int b = 0;
    int mod;
    int *pdiv = &div;
    int *pmod = &mod;

    ft_div_mod(a,b,pdiv,pmod);
    printf("%i ",div);
    return (0);
}
// ex04
#include <stdio.h>

int main()
{    
    int a = 2;
    int b = 0;

    ft_ultimate_div_mod(&a,&b);
    printf("%i ",b);
    return (0);
}

// ex05
#include <stdio.h>

int main()
{    
    char str[] = "Eduardo";
    ft_putstr(str);
    return (0);
}
// ex06
#include <stdio.h>

int    main(void)
{
    char str[] = "aaaaaaaaaaaaaaaaaaaaaaaaa";

    int len = ft_strlen(str);

    printf("%d\n", len);
}
// ex07
int        main (void)
{
    int tab[] = {0, 1, 2, 3, 4};
    int size;
    
    size = 5;

    ft_rev_int_tab(tab, size);

    printf("%d", tab[0]);
}