#include <stdio.h>

int main()
{
    int i,n,a,r=0;
    printf("enter your number ");
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        n=n/10;
        r=r*10+a;
    }
    printf("reverse number=%d",r);
    return 0;
}