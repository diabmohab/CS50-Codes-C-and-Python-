#include  <cs50.h>
#include <stdio.h>
// it won't run the code without this declaration of the function //before running the code itself
void chart(int score);
int COUNT = 5; // number of bars
int main(void)
{
    // get scores from user 
    int scores[COUNT];
    for ( int i = 0; i < COUNT; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);   
    }
    
    // Chart scores
    for (int i = 0; i< COUNT; i++)
    {
        printf("Score %i: ", i + 1);
            chart(scores[i]);
    }
}
// the function itself
void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}
