#include <stdio.h>
int main(){
    int n,i,j,sum;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Entere values:");
        scanf("%d",&a[i]);
    }
    scanf("%d",&sum);
    printf("The numbers with the sum is,");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("%d %d",a[i],a[j]);
            }
        }
    }
    return 0;
}