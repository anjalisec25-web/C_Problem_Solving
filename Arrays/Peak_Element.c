#include <stdio.h>
int main(){
    int n,i;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("\nEnter Values:");
        scanf("%d",&a[i]);
    }
    printf("\nPeak elemnts:\n");
    for(i=0;i<n;i++){
        if((i==0||a[i]>a[i-1])&&(i==n-1||a[i]>a[i+1])){
            printf("%d ",a[i]);
        }
    }
    return 0;
}