
#include <stdio.h>
void tocheckprime(int a);

int main()
{
    int a,b;
    printf("enter your number ");
    scanf("%d",&a);
    tocheckprime(a);
    return 0;
}
void tocheckprime(int a){
    int f=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            f=f+1;
        }
    }
    if(f==2){
        printf("%d is a prime number",a);
    }
    else{
        printf("%d is not a prime number",a);
    }
}