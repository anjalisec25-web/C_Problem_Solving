#include <stdio.h>
int main(){
    int n,i,sum=0,avg=0;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter Values:");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("\nThe sum of values in the array is %d",sum);
    avg=sum/n;
    printf("\nThe average of values in the array is %d",avg);
    return 0;
}