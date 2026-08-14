#include <stdio.h>
int main(){
    char str[100],rev[100];
    int i=0,len=0,si=0,ri=0;
    printf("Enter a String:");
    scanf("%s",str);
    while(str[i]!='\0'){
        i++;
    }
    len=i;
    si=len-1;
    while(si>=0){
        rev[ri]=str[si];
        si--;
        ri++;
    }
    rev[ri]='\0';
    printf("Reversed string,\n%s",rev);
    return 0;
}