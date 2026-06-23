#include <stdio.h>
int main()
{
    int i,n,s=0,arr[100];
    printf("enter your number of elements ");
    scanf("%d",&n);
    printf("enter yout elements ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],secmax=arr[0];
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]>secmax && arr[i]<max){
            secmax=arr[i];
        }
    }
    printf("the second maximum number =%d",secmax);
    return 0;
}
