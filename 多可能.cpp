#include <stdio.h>
int main ()
{
    int S;
    if(90<=S&&S<=100)
        {
            printf("A");
        }
    else if (80<=S&&S<=90)
        {
            printf("B");
        }
    else if (70<=S&&S<=80)
        {
            printf("C");
        }
    else if  (60<=S&&S<=70)
        {
            printf("D");
        }
    else if (0<S&&S<60)
        {
            printf("E");
        }
    else
        {
            printf("EORR");
        }
}
