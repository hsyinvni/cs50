#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollar;
    do
    {
        dollar = get_float("Enter your change:");
    }
    while(dollar <= 0);

    int cent = round (dollar*100);
    int coins=0;
    while(cent >=25)
    {
        cent -= 25; // thats mean cent = cent-10
        coins++;
    }
    while( cent >= 10)
    {
        cent -= 10;
        coins++;
    }
    while (cent >= 5)
    {
        cent -= 5;
        coins++;
    }
    while (cent >= 1)
    {
        cent -=1;
        coins++;
    }

    printf("you will need at least %i coins\n", coins);

}
