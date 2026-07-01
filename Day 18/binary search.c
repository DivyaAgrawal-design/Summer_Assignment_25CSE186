#include <stdio.h>
int main()
{
    int i,n,j,key,mid,low=0,high;
    printf("enter your number of terms");
    scanf("%d",&n);
    high=n-1;
    int arr[n];
    printf("enter %d elements in sorted form",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter your elements to be searched");
    scanf("%d",&key);
    while(low<=high){
        mid=(low+high)/2;
        if(key==arr[mid]){
            printf("elements is found at index %d",mid);
            return 0;
        }
        else if(key<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    printf("element not found");
    return 0;
}
