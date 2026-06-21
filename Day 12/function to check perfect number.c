
#include <stdio.h>
void perfect(int n){
    int b=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            b=b+i;
        }
    }
    if(n==b){
        printf("%d is perfect number",n);
    }
    else{
        printf("%d is not perfect number",n);
    }
    
}

int main()
{
    int n;
    printf("enter your number");
    scanf("%d",&n);
    perfect(n);

    return 0;
}