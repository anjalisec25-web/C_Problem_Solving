#include <stdio.h>
int main(){
    int n,i,j,sum=0;
    printf("Enter number of values in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Values:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                sum+=a[j];
                break;
            }
        }
    }
    printf("The sum of duplicates in the array is %d",sum);
    return 0;
}