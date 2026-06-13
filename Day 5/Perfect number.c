#include <stdio.h>

int main()
{
    int i,n,a=0;
    printf("enter your number");
    scanf("%d",&n);
    int c=n;
    for(i=1;i<n;i++){
        if(n%i==0){
            a=a+i;
        }
        
    }
    if(c==a){
        printf("%d is a perfect number",c);
    }
    else{
        printf("%d is not a perfect number ",c);
    }

    return 0;
}
