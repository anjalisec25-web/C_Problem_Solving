#include <stdio.h>
int main(){
    int num,a=0,b=1,c;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    if(num==0 || num==1){
        printf("%d",a);
    }
    else if(num==2){
        printf("%d",a);
        printf("\t%d",b);
    }
    else{
        printf("%d",a);
        printf("\t%d",b);
        for(int i=0;i<num-2;i++){
            c=a+b;
            printf("\t%d",c);
            a=b;
            b=c;
        }
    }
    return 0;
}