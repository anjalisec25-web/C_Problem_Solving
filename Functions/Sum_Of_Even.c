#include <stdio.h>
int sumeven(int n,int m,int sum){
    if(n>m){
        return sum;
    }
    if(n%2==0){
        sum+=n;
    }
    return sumeven(n+1,m,sum);
}
int main(){
    int start,end;
    printf("Enter Starting Number:");
    scanf("%d",&start);
    printf("Enter Ending Number:");
    scanf("%d",&end);
    printf("sum=%d",sumeven(start,end,0));
    return 0;
}