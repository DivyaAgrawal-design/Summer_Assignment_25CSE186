
#include <stdio.h>

int main()
{
    int i, j,k;

    for(i = 1; i <= 5; i++){
        for(j = 5; j > i; j--){
            printf(" ");
        }
        int a=65;
        for(j = 1; j <= i; j++){
            printf("%c",a);
            a=a+1;
        }
        int b=64+(i-1);
        for(k=2;k<=i;k++){
            printf("%c",b);
            b=b-1;
        }
        printf("\n");
    }    

    return 0;
}