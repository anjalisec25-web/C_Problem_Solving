#include <stdio.h>
int main(){
    int num,temp=0,digit=0,rev=0;
    printf("Enter Number for Reversing:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        digit=temp%10;
        rev=(rev*10)+digit;
        temp=temp/10;
    }
    printf("The reverse of the number is %d",rev);
    return 0;
}