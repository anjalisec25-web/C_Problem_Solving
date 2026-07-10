#include <stdio.h>
int main(){
    int num,isprime=1,i,temp=0;
    printf("Enter a Number:");
    scanf("%d",&num);
    temp=num;
    if(num<1){
        isprime=0;
    }
    for(i=2;i<temp/2;i++){
        if(temp%2==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1){
        printf("The number %d is Prime. ",num);
    }
    else{
        printf("The number %d is not Prime. ",num);
    }
    return 0;
}