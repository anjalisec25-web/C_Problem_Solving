#include <stdio.h>
int armstrong(int n);
int prime(int n);
int perfect(int n);
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(armstrong(n)){
        printf("%d is Armstrong Number.\n",n);
    }
    else{
        printf("%d is not Armstrong Number.\n",n);
    }
    if(prime(n)){
        printf("%d is Prime Number.\n",n);
    }
    else{
        printf("%d is not a Prime number.\n",n);
    }
    if(perfect(n)){
        printf("%d is a Perfect Number.\n",n);
    }
    else{
        printf("%d is not a Perfect Number.\n",n);
    }
    return 0;
}
int armstrong(int n){
    int sum=0,rem=0,num;
    num=n;
    while(num>0){
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num/=10;
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
}
int perfect(int n){
    int num,i,sum=0;
    num=n;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
}
int prime(int n){
    int num,i;
    num=n;
    if(num<2){
        return 0;
    }
    for(i=2;i<n;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}