
#include <stdio.h>

int main()
{
    int i,n,x,d=1;

    printf("Enter a number");
    scanf("%d", &x);
    printf("enter your power");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        d=d*x;
    
    }

    printf("d=%d",d);

    return 0;
}