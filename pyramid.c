#include <cs50.h>
#include <stdio.h>

int main()
{
    int g;
     do
     {
        g = get_int("Height: ");
     }
     while (g < 1 || g > 8);

     for (int i = 1; i <= g; i++)
     {
        for (int w = 0; w < g - i; w++)
            printf(" ");

        for (int l = 0; l < i; l++)
            printf("#");

        printf("\n");
     }
}