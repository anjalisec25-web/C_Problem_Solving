#include <stdio.h>
int main(){
    char str[100],ch;
    int i,first=0,sec=0,freq[256]={0};
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        freq[str[i]]++;
    }
    for(i=0;i<256;i++){
        if(freq[i]>first){
            first=freq[i];
        }
    }
    for(i=0;i<256;i++){
        if(freq[i]<first && freq[i]>sec){
            sec=freq[i];
            ch=i;
        }
    }
    printf("The second Largest Frequency element is %c",ch);
    return 0;
}