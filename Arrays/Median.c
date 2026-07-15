#include <stdio.h>
int main(){
    int n,i,j,temp=0;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter values:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(n%2==0){
        float m;
        m=(arr[n/2]+arr[n/2-1])/2.0;
        printf("Median = %f",m);
    }
    else{
        printf("Median = %d",arr[n/2]);
    }
    return 0;
}