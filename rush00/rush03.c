#include <stdio.h>

int main()
{
     int i;
    int j;
    int r = 4;
    int c = 4;
    i = 1;

    while(i <= r)
    {s
        j = 1;
        while(j <= c)
        {
            if((i ==1 || i == r) && (j == 1))
            {
            printf("A");
            }
            else if((i == 1 || i == r) && (j > 1 && j < c))
            {
            printf("B");
            }
            else if((i > 1 && i < r) && (j == 1 || j == c))
            {
            printf("B");
            }
            else if((i == 1 || i == r) && (j == c))
            {
            printf("C");
            }
            else
            {
            printf(" ");
            }
            j++;
        }
        printf("\n");
    i++;
    }

    return 0;
}
