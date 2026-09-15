#include <stdio.h>
int maximum(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int minimum(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    printf("Maximum Number=%d\n",maximum(a,b));
    printf("Minimum Number=%d",minimum(a,b));
    return 0;
}