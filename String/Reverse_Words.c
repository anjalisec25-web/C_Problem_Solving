#include <stdio.h>
int main(){
    char str[100];
    int i=0,start,end;
    printf("Enter a String:");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    end=i-1;
    if(str[end]=='\n'){
        end--;
    }
    printf("Reverse Order:");
    while(end>=0){
        start=end;
        while(start>=0 && str[start]!=' '){
            start--;
        }
        for(i=start+1;i<=end;i++){
            printf("%c",str[i]);
        }
        printf(" ");
        end=start-1;
    }
    return 0;
}