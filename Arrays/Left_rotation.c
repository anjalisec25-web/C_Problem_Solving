#include <stdio.h>
int main(){
    int n,i,first=0;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("\nEnter values:");
        scanf("%d",&a[i]);
    }
    first=a[0];
    for(i=0;i<n;i++){
        a[i]=a[i+1];
    }
    a[n-1]=first;
    printf("\nThe final Array after left rotation,\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}