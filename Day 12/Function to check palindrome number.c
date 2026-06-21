#include <stdio.h>
void palindrome(int n){
    int r,b=0;
    int c=n;
    while(n!=0){
        r=n%10;
        b=b*10+r;
        n=n/10;
    }
    if(c==b){
        printf("%d is a palindrome number",c);
    }
    else{
        printf("%d is not a palindrome number",c);
    }
}

int main()
{
    int n;
    printf("enter your number");
    scanf("%d",&n);
    palindrome(n);

    return 0;
}
