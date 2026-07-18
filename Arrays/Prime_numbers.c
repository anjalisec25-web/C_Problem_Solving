#include <stdio.h>
int main(){
    int n,i,j,count=0;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter Values:");
        scanf("%d",&arr[i]);
    }
    printf("Prime Numbers,\n");
    for(i=0;i<n;i++){
        if(arr[i]<=1){
            continue;
        }
        count=0;
        for(j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                count++;
            }
        }
        if(count==0){
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}