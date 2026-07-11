#include <stdio.h>
int main(){
    int num,power,i,temp=0,sum=1;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    printf("Enter power of the number:");
    scanf("%d",&power);
    for(i=1;i<=power;i++){
        sum=sum*num;
    }
    printf("%d power %d is %d",temp,power,sum);
    return 0;
}