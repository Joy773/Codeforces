#include<stdio.h>
int main()
{
    int d, sum;
    scanf("%d", &d);
    if(d % 5 == 0)
    {
        sum = d / 5 ;
        printf("%d", sum);
    }
    else
    {
        sum = (d / 5) + 1;
        printf("%d", sum);
    }
    return 0;
}
