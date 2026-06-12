/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i;

    printf("Enter the term number: ");
    scanf("%d", &n);

    if (n == 1)
        printf("%d", a);
    else if (n == 2)
        printf("%d", b);
    else
    {
        for(i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d", c);
    }

    return 0;
}