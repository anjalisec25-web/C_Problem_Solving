#include <stdio.h>
int main(){
    int n,i,*p;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int a[n];
    p=a;
    for(i=0;i<n;i++){
        printf("Enter Number:");
        scanf("%d",p+i);
    }
    printf("Array Elements are,\n");
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}