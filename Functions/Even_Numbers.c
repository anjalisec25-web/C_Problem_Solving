#include <stdio.h>
void even(int a,int b){
    if(a>b){
        return;
    }
    if(a%2==0){
        printf("%d ",a);
    }
    even(a+1,b);
}
int main(){
    int start,end;
    printf("Enter starting number:");
    scanf("%d",&start);
    printf("Enter Ending number:");
    scanf("%d",&end);
    even(start,end);
    return 0;
}