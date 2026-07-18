#include <stdio.h>
int main(){
    int n,i,j,count;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("\nEnter values:");
        scanf("%d",&arr[i]);
    }
    printf("Non Prime Numbers,\n");
    for(i=0;i<n;i++){
        if(arr[i]<=1){
            printf("%d\t",arr[i]);
            continue;
        }
        count=0;
        for(j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                count++;
            }
        }
        if(count>=1){
            printf("%d\t",arr[i]);
            }  
    }
    return 0;
}