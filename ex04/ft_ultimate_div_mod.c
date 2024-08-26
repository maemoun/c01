#include <unistd.h>
//#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;
    if (b != 0)
    {
        div = *a / *b;
        mod = *a % *b;
    }
    *a = div;
    *b = mod;
}

/*int main()
{
    int a = 8;
    int b = 2;
    int c;
    int d;
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n%d", a, b);
}*/