
#include <stdio.h>

int main()
{
    int i,n,b,d=0;
    printf("enter your number");
    scanf("%d",&n);
    int c=n;
    while(n!=0){
        b=n%10;
        n=n/10;
        int a=1;
        for(i=1;i<=b;i++){
            a=a*i;
        }
        d=d+a;
       
    }
    if(c==d){
        printf("%d is a strong number",c);
    }
    else{
        printf("%d is not a strong number ",c);
    }
    

    return 0;
}