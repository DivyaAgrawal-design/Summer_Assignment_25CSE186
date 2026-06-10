
#include <stdio.h>

int main()
{
    int i,n,a,b,r=0; 
    printf("enter your number ");
    scanf("%d",&n);
    b=n;
    while(n!=0){
        a=n%10;
        n=n/10;
        r=r*10+a;
    }
    if(r==b){
        printf("number is palindrome ");
    }
    else{
        printf("number is not palindrome ");
    } 
    return 0;
}