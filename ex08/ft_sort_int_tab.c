#include <unistd.h>
//#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int swap;
    i = 0;
    j = i + 1;

    while(i < size - 1)
    {
        while(j <= size - 1)
        {
            if (tab[i] > tab[j])
            {
                swap = tab[i];
                tab[i] = tab[j];
                tab[j] = swap;
            }
            j++;
        }
        i++;
        j = i + 1;
    }
}

/*int main()
{
    int t[] = {5,-1,6,2,0};
    int size = 5;
    ft_sort_int_tab(t, size);
    printf("%d %d %d %d %d\n", t[0], t[1], t[2], t[3], t[4]);
    return(0);
}*/