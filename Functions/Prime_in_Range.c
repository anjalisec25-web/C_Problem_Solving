#include <stdio.h>
int prime(int n){
    int i;
    if(n<2){
        return 0;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int i,start,end;
    printf("Enter Starting number:");
    scanf("%d",&start);
    printf("Enter Ending number:");
    scanf("%d",&end);
    printf("Prime NUmbers Between the Range,\n");
    for(i=start;i<=end;i++){
        if(prime(i)){
            printf("%d ",i);
        }
    }
    return 0;
}