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
    int max=arr[0],min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("the maximum number =%d\n",max);
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        
    }
    
    printf("the minimum number =%d",min);

    

    return 0;
}
