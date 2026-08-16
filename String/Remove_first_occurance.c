#include <stdio.h>
int main(){
    char str[100],n;
    int i=0,j=0;
    printf("Enter a String:");
    scanf("%s",str);
    printf("Enter Character to remove:");
    scanf(" %c",&n);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==n){
            for(j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            }
            break;
        }
    }
    printf("%s",str);
    return 0;
}