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
    int k=0;
    for(i=0;i<n;i++){
        int found=0;
        for(int j=0;j<k;j++){
            if(arr[i]==arr2[j]){
                found=1;
                break;
            }
        }
        if(found==0){
            arr2[k]=arr[i];
            k++;
        }
    }
    for(int j=0;j<n;j++){
        int found=0;
        for(i=0;i<n;i++){
            if(arr1[j]==arr2[i]){
                found=1;
                break;
            }
        }
        if(found==0){
            arr2[k]=arr1[j];
            k++;
        }
    }
    for(i=0;i<k;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}