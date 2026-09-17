#include <stdio.h>
int reverse(int n,int rev){
    if(n==0){
        return rev;
    }
    return reverse(n/10,rev*10+(n%10));
}
int ispal(int n){
    if(n==reverse(n,0)){
        return 1;
    }
    return 0;
}
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    if(ispal(num)){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}