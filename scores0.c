#include  <cs50.h>
#include <stdio.h>
// it won't run the code without this declaration of the function //before running the code itself
void chart(int score);
int main(void)
{
    int score1 = get_int("Score1: ");
    int score2 = get_int("Score2: ");
    int score3 = get_int("Score3: ");
    int score4 = get_int("Score4: ");
    int score5 = get_int("Score5: ");

    printf("Score1: ");    
    chart(score1);
    printf("Score2: ");    
    chart(score2);
    printf("Score3: ");    
    chart(score3);
    printf("Score4: ");    
    chart(score4);
    printf("Score5: ");    
    chart(score5);
}


void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}
