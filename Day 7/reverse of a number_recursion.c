
#include <stdio.h>
int r=0;
void rev(int n){
    if(n==0){
        return;
    }
    r=r*10+(n%10);
    rev(n/10);
}

int main()
{
    int n;
    printf("enter your number");
    scanf("%d",&n);
    rev(n);
    printf("reverse=%d",r);
    return 0;
}