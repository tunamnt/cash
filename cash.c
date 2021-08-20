#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int money = get_int("Money: ");
    int remain = money;
    int count = 0;

    while (remain >= 25)
    {
        remain = remain - 25;
        count = count + 1;
    }

    while (remain >= 10)
    {
        remain = remain - 10;
        count = count + 1;
    }

        while (remain >= 5)
    {
        remain = remain - 5;
        count = count + 1;
    }

    while (remain >= 1)
    {
        remain = remain - 1;
        count = count + 1;
    }

    printf("Remain: %i & Count: %i\n", remain, count);
    printf("\n");
}