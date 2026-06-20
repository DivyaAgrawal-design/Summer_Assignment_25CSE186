
#include <stdio.h>
int factorial(int a);

int main()
{
    int a,b;
    printf("enter your number ");
    scanf("%d",&a);
    printf("factorial=%d",factorial(a));
    return 0;
}
int factorial(int a){
    int p=1;
    for(int i=1;i<=a;i++){
        p=p*i;
    }
    return p;
        
}