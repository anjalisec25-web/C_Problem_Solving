#include <stdio.h>
int lcm(int a,int b,int mul){
    if(mul%a==0 && mul%b==0){
        return mul;
    }
    return lcm(a,b,mul+1);
}
int main(){
    int a,b;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    printf("%d",lcm(a,b,(a>b)?a:b));
    return 0;
}