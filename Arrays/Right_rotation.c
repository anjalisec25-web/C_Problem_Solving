#include <stdio.h>
int main(){
    int n,i,last=0;
    printf("Enter Number of Values in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("\nEnter Values:");
        scanf("%d",&a[i]);
    }
    last=a[n-1];
    for(i=n-1;i>=0;i--){
        a[i]=a[i-1];
    }
    a[0]=last;
    printf("\nThe final Array after right rotation,\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}