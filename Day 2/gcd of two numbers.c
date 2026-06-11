/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,a,b,g;
    printf("enter your numbers");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            g=i;
        }
    }
    printf("%d is the greatest common factor",g);

    return 0;
}