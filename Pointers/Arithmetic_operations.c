#include <stdio.h>
int main(){
    int num1,num2,*p1,*p2,add,sub,mul,div;
    printf("Enter NUmber 1:");
    scanf("%d",&num1);
    printf("Enter NUmber 2:");
    scanf("%d",&num2);
    p1=&num1;
    p2=&num2;
    add=(*p1)+(*p2);
    sub=(*p1)-(*p2);
    mul=(*p1)*(*p2);
    div=(*p1)/(*p2);
    printf("Sum=%d\n",add);
    printf("Difference=%d\n",sub);
    printf("Product=%d\n",mul);
    printf("Quotient=%d",div);
    return 0;
}