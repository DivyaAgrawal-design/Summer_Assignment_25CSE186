#include <stdio.h>
int main()
{
    int i,n,sum,key, element;
    printf("enter your number of terms");
    scanf("%d",&n);
    printf("enter the sum you want");
    scanf("%d",&sum);
    int arr[n];
    printf("enter %d elements ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    
    }
    printf("the required pairs are\n");
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d,%d\n",arr[i],arr[j]);
            }
            
        }
    }
    return 0;
}