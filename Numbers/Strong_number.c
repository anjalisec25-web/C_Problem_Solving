/*
Problem: Strong Number

Description:
A Strong number is a number that is equal to the sum of the factorials of its digits.

Example:
145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
*/

#include <stdio.h>
int main(){
    int num,digit,fact,temp=0,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        digit=temp%10;
        fact=1;
        for(i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(num==sum){
        printf("%d is a Strong Number",num);
    }
    else{
        printf("%d is not a Strong Number",num);
    }
    return 0;
}