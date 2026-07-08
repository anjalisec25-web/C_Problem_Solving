#include <stdio.h>
int main(){
    int n,i,smallest=0;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Values:");
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(i=1;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    printf("The smallest Number in the array is %d",smallest);
    return 0;
}