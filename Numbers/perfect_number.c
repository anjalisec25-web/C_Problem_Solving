/*
Problem: Perfect Number

Description:
A Perfect number is a number that is equal to the sum of its positive factors,
excluding the number itself.

Example:
6 = 1 + 2 + 3 = 6
*/

#include <stdio.h>
int main(){
    int num,temp=0,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    for(i=1;i<=temp/2;i++){
        if(temp%i==0){
            sum=sum+i;
        }
    }
    if(num==sum){
        printf("%d is Perfect Number",num);
    }
    else{
        printf("%d is not a Perfect Number",num);
    }
    return 0;
}