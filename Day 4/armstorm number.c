/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,a,b=0,c;
    printf("enter your mumber");
    scanf("%d",&n);
    c=n;
    while(n!=0){
        a=n%10;
        n=n/10;
        b=b+(a*a*a);
    }
    if(b==c){
        printf("%d is armstorm number",c);
    }
    else{
        printf("%d is not armstorm number",c);
    }
    return 0;
}
