#include <stdio.h>
int main(){
    char str1[100],str2[100],*p,*q,*s;
    printf("Enter String 1:");
    scanf("%s",str1);
    printf("Enter String 2:");
    scanf("%s",str2);
    p=str1;
    q=str2;
    s=p;
    while(*p){
        p++;
    }
    while(*q){
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf("Concatenated String:%s",s);
    return 0;
}