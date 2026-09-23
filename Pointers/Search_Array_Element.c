#include <stdio.h>
int main(){
    int n,i,*p,key;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int a[n];
    p=a;
    for(i=0;i<n;i++){
        printf("Enter Numbers:");
        scanf("%d",p+i);
    }
    printf("Enter Number to find:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(*(p+i)==key){
            printf("%d is found in Index %d",key,i);
        }
    }
    return 0;
}