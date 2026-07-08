#include <stdio.h>
int main(){
    int n,i,largest=0;
    printf("Enter Number of values in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Values:");
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=1;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    printf("The Largest Number in the Array is %d",largest);
    return 0;
}