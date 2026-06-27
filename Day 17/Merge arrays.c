#include <stdio.h>
int main()
{
    int i,n,k=0;
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
        arr2[i]=arr[i];
    }
    int j=0;
    for(i=n;i<2*n;i++){
        arr2[i]=arr1[j];
        j++;
    }
    for(i=0;i<2*n;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}
