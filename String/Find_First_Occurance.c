#include <stdio.h>
int main(){
    char str[100],ch;
    int i,found=0;
    printf("Enter a string:");
    scanf("%s",str);
    printf("Enter Character to find:");
    scanf(" %c",&ch);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("%c is in the index %d",ch,i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("The Character is not in the String.");
    }
    return 0;
}