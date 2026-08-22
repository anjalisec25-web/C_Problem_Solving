#include <stdio.h>
int main(){
    char str[100];
    int freq[256]={0},i;
    printf("Enter a String:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    printf("Frequency of Each Character,\n");
    for(i=0;i<256;i++){
        if(str[i]!='\n' && freq[i]!=0){
            printf("%c = %d\n",i,freq[i]);
        }
    }
    return 0;
}