
#include <stdio.h>

int main()
{
    int i,n,a,p=1; 
    printf("enter your number ");
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        n=n/10;
        p=p*a;
        
    }
    printf("product of digits of number=%d",p);
    return 0;
}