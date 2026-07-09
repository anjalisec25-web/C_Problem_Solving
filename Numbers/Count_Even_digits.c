#include <stdio.h>
int main(){
    int num,temp,digit=0,count=0;
    printf("Enter a Number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        digit=temp%10;
        if(digit%2==0){
            count++;
        }
        temp=temp/10;
    }
    printf("The number of even digits in %d is %d",num,count);
    return 0;
}