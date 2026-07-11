#include <stdio.h>
int main(){
    int num1,num2,temp;
    printf("Enter first Number:");
    scanf("%d",&num1);
    printf("\nEnter second Number:");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\nAfter Swapping,");
    printf("\nFirst number = %d",num1);
    printf("\nSecond number = %d",num2);
    return 0;
}