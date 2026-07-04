#include <stdio.h>
int main(){
    int num;
    printf("Enter a number to check whether it is even or odd:");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("%d is an Even Number",num);
    }
    else{
        printf("%d is an Odd Number",num);
    }
    return 0;
}