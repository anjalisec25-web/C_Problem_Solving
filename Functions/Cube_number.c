#include <stdio.h>
int cube(int n){
    return n*n*n;
}
int main(){
    int n,c=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    c=cube(n);
    printf("%d",c);
    return 0;
}