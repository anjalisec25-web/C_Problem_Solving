#include <stdio.h>
int main(){
    int num,temp,smallest=0,digit;
    printf("Enter a Number:");
    scanf("%d",&num);
    temp=num;
    smallest=temp%10;
    while(temp!=0){
        digit=temp%10;
        if(digit<smallest){
            smallest=digit;
        }
        temp=temp/10;
    }
    printf("The smallest number in %d is %d",num,smallest);
    return 0;
}