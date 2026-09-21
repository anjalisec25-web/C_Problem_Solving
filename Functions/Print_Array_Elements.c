#include <stdio.h>
void arr(int a[],int n,int i){
    if(i==n){
        return;
    }
    printf("%d ",a[i]);
    return arr(a,n,i+1);
}
int main(){
    int n,i;
    printf("Enter Number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter numbers:");
        scanf("%d",&a[i]);
    }
    arr(a,n,0);
    return 0;
}