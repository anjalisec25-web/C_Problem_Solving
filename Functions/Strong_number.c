#include <stdio.h>
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
int isstrong(int n){
    int num,sum=0,rem=0;
    num=n;
    while(num>0){
        rem=num%10;
        sum=sum+fact(rem);
        num/=10;
    }
    if(n==sum){
        return 1;
    }
    return 0;
}
int main(){
    int start,end,i;
    printf("Enter Starting Number:");
    scanf("%d",&start);
    printf("Enter Ending Number:");
    scanf("%d",&end);
    for(i=start;i<=end;i++){
        if(isstrong(i)){
            printf("%d ",i);
        }
    }
    return 0;
}