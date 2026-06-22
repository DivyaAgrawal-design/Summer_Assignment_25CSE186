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
    int ec=0,oc=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            ec=ec+1;
        }
        else{
            oc=oc+1;
        }
    }
    printf("the total even elements=%d\n",ec);
    printf("the total odd elements=%d",oc);
    return 0;
}
