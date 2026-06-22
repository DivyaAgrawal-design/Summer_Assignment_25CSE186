#include <stdio.h>

int main()
{
    int i,n,arr[100];
    printf("enter your number");
    scanf("%d",&n);
    printf("enter your elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("print the array elements \n");
    for(i=0;i<n;i++){
        printf("element %d=%d\n",i+1,arr[i]);
    }

    return 0;
}
