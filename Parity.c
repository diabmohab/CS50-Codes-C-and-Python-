#include <stdio.h>
#include <cs50.h>
int main(void)
{
    // Prompt user for Integer
    int n = get_int("n: ");
    // Check Parity for Integer
    if (n % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}
