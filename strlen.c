#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Name: ");
    //Building the functionality of strlen() function
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    
    printf("The length of your name is %i\n", n);
}
