#include <stdio.h>
int main(){
    char str1[100],str2[100],*p,*q;
    int i;
    printf("Enter a String:");
    scanf("%s",str1);
    p=str1;
    q=str2;
    for(i=0;str1[i]!='\0';i++){
        *(q+i)=*(p+i);
    }
    *(q+i)='\0';
    printf("Copied String:%s",q);
    return 0;
}