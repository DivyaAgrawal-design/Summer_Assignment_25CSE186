#include <stdio.h>
int main()
{
    int i,n,temp;
    printf("enter your number of terms");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
    }
    printf("array after sorting");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
