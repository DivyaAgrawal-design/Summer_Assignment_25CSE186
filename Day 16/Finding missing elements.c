#include <stdio.h>
int main()
{
    int i,n,sum=0,total;
    printf("enter your number of terms");
    scanf("%d",&n);
    int arr[n-1];
    printf("enter %d elements ",n-1);
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    total=n*(n+1)/2;
    printf("the missing number is %d",(total-sum));

    return 0;
}
