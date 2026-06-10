
#include <stdio.h>

int main()
{
    int a=0,n,r;
    printf("enter your number");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        n=n/10;
        a=a+1;
    }
    printf("number of digits=%d",a);

    return 0;
}
