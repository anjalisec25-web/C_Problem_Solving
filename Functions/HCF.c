#include <stdio.h>
int hcf(int n,int m){
    if(m==0){
        return n;
    }
    return hcf(m,n%m);
}
int main(){
    int a,b;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    printf("%d",hcf(a,b));
    return 0;
}