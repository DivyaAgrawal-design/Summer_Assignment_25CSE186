#include <stdio.h>
int main()
{
    int i,n,sum=0,key, element;
    printf("enter your number of terms");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    
    }
    int maxfre=0;
    for(i=0;i<n;i++){
        int fr=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                fr=fr+1;
            }
            
        }
        if(fr>maxfre){
            maxfre=fr;
            element=arr[i];
        }
    }
    printf("the maxmimum frequency element is %d with %d frequency",element,maxfre);
    return 0;
}