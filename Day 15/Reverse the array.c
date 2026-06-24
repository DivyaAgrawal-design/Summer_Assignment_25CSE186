#include <stdio.h>

int main()
{
    int i,n,arr[100],rev[100];
    printf("enter your number of terms");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    i=n-1;
    for(int j=0;j<n;j++){
        rev[j]=arr[i];
        i--;
    }
    for(int j=0;j<n;j++){
        printf("%d\n",rev[j]);
    }

    return 0;
}
