#include <stdio.h>
int main(){
    int n,i,j,count=0,found=0;
    printf("Enter number of values in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter values:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>n/2){
            printf("The majority element is,\n");
            printf("%d",a[i]);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("There is no majority elements.");
    }
    return 0;
}