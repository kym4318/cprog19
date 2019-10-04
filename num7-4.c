#include <stdio.h>
 
int main()
{
    for (int i = 2; i <= 8; i=i+2)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("%d x %d = %d\n", i, j, (i*j));
        }
        printf("\n");
    }
 
    return 0;
}


