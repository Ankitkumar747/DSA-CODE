#include <stdio.h>

int main() {
    int i, j;


    // Loop to print each row
    for (i = 0; i <= 5; i++) 
    {
        // Print spaces
        for (j = 0; j <= 5 - i; j++) 
        {
            printf(" ");
        }
        // Print stars
        for (j = 0; j <= i; j++) 
        {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
