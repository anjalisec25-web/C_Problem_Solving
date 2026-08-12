#include <stdio.h>
int main(){
    char str1[100],str2[100];
    int i=0,flag=1;
    printf("Enter String 1:");
    scanf("%s",str1);
    printf("Enter String 2:");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Both Strings are equal.");
    }
    else{
        printf("Both Strings are not equal.");
    }
}