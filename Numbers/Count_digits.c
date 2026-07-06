#include <stdio.h>
int main(){
    int num,count=0,temp;
    printf("Enter a Number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    printf("The number of digits in %d is %d",num,count);
    return 0;
}