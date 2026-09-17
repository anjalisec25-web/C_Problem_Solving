#include <stdio.h>
void naturalnum(int n){
    if(n==0){
        return;
    }
    naturalnum(n-1);
    printf("%d ",n);
}
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    naturalnum(num);
    return 0;
}