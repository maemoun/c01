#include <unistd.h>
//#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int swp;

    i = 0;
    while (i < size / 2)
    {
        swp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = swp;
        i++;
    }
}

/*int main()
{
    int t[] = {1,2,3,4};
    int size = 4;
    ft_rev_int_tab(t, size);
    printf("%d %d %d %d", t[0], t[1], t[2], t[3]);
    return(0);
}*/