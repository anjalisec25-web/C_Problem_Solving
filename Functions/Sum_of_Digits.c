#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    return n%10+sum(n/10);
}
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    printf("Sumofdigits=%d",sum(num));
    return 0;
}
