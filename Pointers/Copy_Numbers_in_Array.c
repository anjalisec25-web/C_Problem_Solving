#include <stdio.h>
int main(){
    int n,i,*p,*q;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int a[n],b[n];
    p=a;
    q=b;
    for(i=0;i<n;i++){
        printf("Enter Number:");
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
        *(q+i)=*(p+i);
    }
    printf("Copied Array Elements,\n");
    for(i=0;i<n;i++){
        printf("%d ",*(q+i));
    }
    return 0;
}