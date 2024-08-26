//#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

/*int main()
{
    int a = 8;
    int b = 2;
    int c;
    int d;
    ft_div_mod(a, b, &c, &d);
    printf("%d\n%d", c, d);
}*/