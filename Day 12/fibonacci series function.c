
#include <stdio.h>

void Fibonacci(int fib[100],int n)
{
    int i;

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("Fibonacci series: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", fib[i]);
    }

}
int main(){
    int n,fib[100];
    printf("enter number of terms");
    scanf("%d",&n);
    Fibonacci(fib,n);
    
}