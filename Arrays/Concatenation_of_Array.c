#include <stdio.h>
int main(){
    int n,i;
    printf("Enter the number of values in the Array:");
    scanf("%d",&n);
    int arr[n],ans[n];
    for(i=0;i<n;i++){
        printf("\nEnter Values:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        ans[i]=arr[i];
        ans[n+i]=arr[i];
    }
    printf("\nConcatenated Array:\n");
    for(i=0;i<n+n;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}