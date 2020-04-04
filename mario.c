#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt for height within range
    int h;
    do
    {
        h = get_int("Height ");
    }
    while (h < 1 || h > 8);
    
    // produce pyramid
    for (int i = 0; i < h; i++)
    {
       for (int d = h-i-1; d > 0; d--)
       {
           printf(" ");
       }
       for (int j = -1; j < i; j++)
        {
            printf("#");
        }
        {
            printf("\n");
        }
        
    }
}
