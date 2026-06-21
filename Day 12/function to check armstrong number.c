
#include <stdio.h>
void armstrong(int n){
    int r,b=0;
    int c=n;
    while(n!=0){
        r=n%10;
        b=b+(r*r*r);
        n=n/10;
    }
    if(c==b){
        printf("%d is armstrong number",c);
    }
    else{
        printf("%d is not armstrong number",c);
    }
    
}

int main()
{
    int n;
    printf("enter your number");
    scanf("%d",&n);
    armstrong(n);

    return 0;
}