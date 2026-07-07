#include <stdio.h>
int main(){
    int n,i;
    printf("Enter Number of Values in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("\nEnter the Values:");
        scanf("%d",&a[i]);
    }
    printf("\nThe Reverse of the Array is:\n");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}