#include <stdio.h>
int main()
{
    int i,n,temp,min,j;
    printf("enter your number of terms");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("array after sorting");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
