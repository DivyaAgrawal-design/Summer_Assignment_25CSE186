#include <stdio.h>
int main()
{
    int i,n;
    printf("enter your number of terms");
    scanf("%d",&n);
    int arr[n],arr1[n],arr2[2*n];
    printf("enter %d elements ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter elements for array2");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr1[j]){
                printf("%d",arr[i]);
                break;
                
            }
            
        }
    }
    return 0;
}