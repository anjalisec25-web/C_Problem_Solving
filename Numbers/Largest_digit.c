#include <stdio.h>
int main(){
    int num,digit,largest=0,temp;
    printf("Enter a Number:");
    scanf("%d",&num);
    temp=num;
    largest=temp%10;
    while(temp!=0){
        digit=temp%10;
        if(digit>largest){
            largest=digit;
        }
        temp=temp/10;
    }
    printf("The largest number in %d is %d",num,largest);
    return 0;
}