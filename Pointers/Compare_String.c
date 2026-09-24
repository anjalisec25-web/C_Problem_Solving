#include <stdio.h>
int main(){
    char str1[100],str2[100],*p,*q,flag=0;
    printf("Enter String 1:");
    scanf("%s",str1);
    printf("Enter String 2:");
    scanf("%s",str2);
    p=str1;
    q=str2;
    while((*p!='\0') || (*q!='\0')){
        if(*p!=*q){
            flag=1;
        }
        p++;
        q++;
    }
    if(flag==0){
        printf("Both Strings are Equal.");
    }
    else{
        printf("Both Strings are Not Equal.");
    }
    return 0;
}