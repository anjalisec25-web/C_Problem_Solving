#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0){
        printf("The entered number is POSITIVE");
    }
    else if(num<0){
        printf("The entered number is NEGATIVE");
    }
    else{
        printf("The entered number is ZERO");
    }
    return 0;
}