/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=0,n,r;
    printf("enter your number");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        n=n/10;
        a=a+r;
    }
    printf("sum=%d",a);

    return 0;
}