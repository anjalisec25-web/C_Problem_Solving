#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Values:");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("The sum of values in the array is %d",sum);
    return 0;
}