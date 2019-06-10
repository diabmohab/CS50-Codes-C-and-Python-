//a code showes integer overflow
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // Iteratively Double i 
    for (int i = 1; ; i *=2)
    {
        printf("%i\n", i);
            sleep(1);
    }
}
