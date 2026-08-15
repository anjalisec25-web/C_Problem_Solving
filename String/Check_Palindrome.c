#include <stdio.h>
int main(){
    char str[100],rev[100];
    int i=0,si=0,ri=0,flag=1;
    printf("Enter a String:");
    scanf("%s",str);
    while(str[i]!='\0'){
        i++;
    }
    si=i-1;
    while(si>=0){
        rev[ri]=str[si];
        ri++;
        si--;
    }
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=rev[i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Palindrome.");
    }
    else{
        printf("Not Palindrome.");
    }
}