#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //prompt user for positive value
    float D;
    do
    {
        D = get_float("Change owed: ");
    }
    while (D < 0);    

    //dollars to cents
    int c = round(D * 100);

    //determine number of quarters (q) and leftover change (z)
    int q = (c / 25);
    int z = (c % 25);

    //determine number of dimes (d) and leftover change (y)
    int d = (z / 10);
    int y = (z % 10);

    //determine number of nickels (n) and resultant pennies (p)
    int n = (y / 5);
    int p = (y % 5);

    //determine total number of coins (T)
    int T = (q + d + n + p);
    {
        printf("%d\n", T);
    }
}
