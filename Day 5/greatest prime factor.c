
#include <stdio.h>

int main()
{
    int i,n,d;
    printf("enter your number");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            int a=i;
            int f=0;
            for(int j=1;j<=a;j++){
                if(a%j==0){
                    f=f+1;    
                }
            }
            if(f==2){
                d=i;
            }
        }
    }
    printf("%d is greatest prime factor",d);
    return 0;
}