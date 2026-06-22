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
    for(i=0;i<n;i++){
        s=s+arr[i];
    }
    printf("the sum =%d\n",s);
    printf("the average =%f",(float)s/n);

    return 0;
}
