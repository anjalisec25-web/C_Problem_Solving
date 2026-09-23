#include <stdio.h>
int main(){
    int n,i,*p,*q,temp=0;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int a[n];
    p=a;
    q=p+(n-1);
    for(i=0;i<n;i++){
        printf("Enter Numbers:");
        scanf("%d",p+i);
    }
    for(i=0;i<n/2;i++){
        temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;
    }
    p=a;
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}