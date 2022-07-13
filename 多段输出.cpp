#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (0<=n&&n<=3)
        {
            printf("infant");
        }
    else if (4<=n&&n<=12)
        {
            printf("child");
        }
    if (13<=n&&n<=18)
        {
            printf("youngster");
        }
    if (19<=n&&n<=25)
        {
            printf("youth");
        }
    else
    return 0;
}
