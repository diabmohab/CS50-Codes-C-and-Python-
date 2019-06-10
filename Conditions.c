#include <stdio.h>

int main()
{
    
    int x = 3; 
    int y = 3;
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y) /* like elif in python */
    {
        printf("y is less than x\n");
    }
    else
    {
        printf(" x is equal to y\n");
    }
    

    return 0;
}
