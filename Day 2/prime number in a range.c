/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n;
    printf("enter number for range ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        int f=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                f=f+1;
            }
        }
        if(f==2){
            printf("\n%d is a prime number",i);
        }
        else{
            printf("\n%d is not a prime number",i);
        }
    }

    return 0;
}