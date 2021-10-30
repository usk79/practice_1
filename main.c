#include <stdio.h>

int main() 
{
    int i, j;
    
    printf("9x9 table\n");

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}

