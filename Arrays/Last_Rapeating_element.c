#include <stdio.h>
int main(){
    int n,i,j,last=0,found=0;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter Values:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                last=arr[j];
                found=1;
            }
        }
    }
    if(found==0){
        printf("There is no repeating element.");
    }
    else{
        printf("The last repeating element is %d",last);
    }
    return 0;
}