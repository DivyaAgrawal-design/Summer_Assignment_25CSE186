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
    int key,flag=0;
    printf("enter the element to know the frequency");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key==arr[i]){
            flag=flag+1;
        }
    }
    if(flag==0){
        printf("element not found");
    }
    else{
        printf("frequency of elements =%d",flag);
    }
    return 0;
}
