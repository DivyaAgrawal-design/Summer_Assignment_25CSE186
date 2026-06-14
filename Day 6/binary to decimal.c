
#include <stdio.h>
#include <math.h>

int main()
{
    int b,r,i=0,d=0;
    printf("Enter a binary number: ");
    scanf("%d", &b);

    while (b!=0)
    {
        r=b%10;
        d=d+r*pow(2, i);
        b=b/ 10;
        i++;
    }

    printf("Decimal number=%d",d);

    return 0;
}