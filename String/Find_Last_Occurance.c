#include <stdio.h>
int main(){
    char str[100],ch;
    int i=0,pos=-1;
    printf("Enter a string:");
    scanf("%s",str);
    printf("Enter a Character:");
    scanf(" %c",&ch);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            pos=i;
        }
    }
    if(pos==-1){
        printf("The Character is not in the string.");
    }
    else{
        printf("%c is in the index %d",ch,pos);
    }
    return 0;
}