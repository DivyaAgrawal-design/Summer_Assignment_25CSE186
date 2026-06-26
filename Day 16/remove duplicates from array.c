#include <stdio.h>
int main()
{
    int i,n,k=0;
    printf("enter your number of terms");
    scanf("%d",&n);
    int arr[n],arr1[n];
    printf("enter %d elements ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    
    }
    for(i=0;i<n;i++){
        int found=0;
        for(int j=0;j<k;j++){
            if(arr[i]==arr1[j]){
                found=1;
                break;
            }
        }
        if(found==0){
            arr1[k]=arr[i];
            k++;
        }
    }
    printf("array after removing duplicates\n");
    for(i=0;i<k;i++){
        printf("%d\t",arr1[i]);
    }
    return 0;
}