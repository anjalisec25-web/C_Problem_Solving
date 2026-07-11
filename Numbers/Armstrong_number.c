/*
An Armstrong number is a number that is equal to the sum of each of its digits
raised to the power of the total number of digits.

Example:
153 = 1³ + 5³ + 3³ = 153
*/

#include <stdio.h>
#include <math.h>
int main(){
    int num,temp=0,digit,rem,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        digit++;
        temp/=10;
    }
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=pow(rem,digit);
        temp=temp/10;
    }
    if(num==sum){
        printf("%d is an Armstrong number",num);
    }
    else{
        printf("%d is not an Armstrong number",num);
    }
    return 0;
}