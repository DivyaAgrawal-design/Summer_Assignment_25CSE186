#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("enter your number");
    scanf("%d",&n);
    printf("factorial=%d",factorial(n));
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
