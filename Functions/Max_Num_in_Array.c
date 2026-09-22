#include <stdio.h>
int maxarr(int a[],int n){
    int max=a[0],i;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int main(){
    int n,i;
    printf("Enter Number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Numbers:");
        scanf("%d",&a[i]);
    }
    printf("Maximum Number in array is,%d",maxarr(a,n));
    return 0;
}