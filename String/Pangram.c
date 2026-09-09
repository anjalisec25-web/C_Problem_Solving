#include <stdio.h>
int main(){
    char str[100];
    int i,a[26]={0};
    printf("Enter a String:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            a[str[i]-'A']=1;
        }
        else if(str[i]>='a' && str[i]<='z'){
            a[str[i]-'a']=1;
        }
    }
    for(i=0;i<27;i++){
        if(a[i]==0){
            printf("It's not a Pangram.");
            return 0;
        }
    }
    printf("It's a Pangram.");
    return 0;
}