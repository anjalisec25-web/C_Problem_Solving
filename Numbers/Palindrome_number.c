#include <stdio.h>
int main(){
    int num,digit=0,rev=0,temp=0;
    printf("Enter number for palindrome:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        digit=temp%10;
        rev=(rev*10)+digit;
        temp=temp/10;
    }
    if(num==rev){
        printf("The Number %d is a palindrome",num);
    }
    else{
        printf("The Number %d is not a palindrome",num);
    }
    return 0;
}