#include <stdio.h> // declares printf, scanf
#include "q.h" // declares decimal_to_roman

int main(void) 
{
    printf("Enter a number (CTRL-D to quit): ");
    int x;
    while (1 == scanf("%d", &x)) 
    {
        if (x <= 0 || x >= 4000) 
        {
            printf("Enter a number (CTRL-D to quit): ");
            continue;
        }
            printf("%d: ", x);
            decimal_to_roman(x);
            printf("Enter a number (CTRL-D to quit): ");
    }
printf("\nQuitting ...\n");
return 0;
}