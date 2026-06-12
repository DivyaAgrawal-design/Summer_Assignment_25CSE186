/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,a,c,b;
    printf("enter the number for the range");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=i;
        b=0;
        while(c!=0){
            a=c%10;
            c=c/10;
            b=b+(a*a*a);
        }
        if(b==i){
            printf("\n%d is armstorm number",i);
        }
    }
   
    

    return 0;
}
