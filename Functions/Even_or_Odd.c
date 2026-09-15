#include <stdio.h>
char *oddeven(int a){
    if(a%2==0){
        return "Even";
    }
    else{
        return "Odd";
    }
}
int main(){
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    printf("%s",oddeven(a));
    return 0;
}