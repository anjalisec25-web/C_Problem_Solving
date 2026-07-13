#include <stdio.h>
int main(){
    int n,i,count=0;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter values:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    if(count==0){
        printf("There is no even number in the Array.");
    }
    else{
        printf("There are %d even numbers in the Array",count);
    }
    return 0;
}