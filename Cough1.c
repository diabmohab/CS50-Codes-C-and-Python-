#include <stdio.h>
//the prototype of the function to avoid error of running code before the function itself
void Cough(void);
int main(void)
{
   for( int i = 0; i < 3; i++)
   {
       Cough();
   }
}

void Cough(void)
{
    printf("cough\n");
}
