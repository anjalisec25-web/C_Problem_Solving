#include <stdio.h>
int main(){
    char str[100],ch=0;
    int i,last=-1;
    printf("Enter a String:");
    scanf("%s",str);
    printf("Enter character to remove its last occurance,");
    scanf(" %c",&ch);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            last=i;
        }
    }
    if(last!=-1){
        for(i=last;str[i]!='\0';i++){
            str[i]=str[i+1];
        }
    }
    printf("String after removing Last Occurance,\n%s",str);
    return 0;
}