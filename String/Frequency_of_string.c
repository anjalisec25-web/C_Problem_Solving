#include <stdio.h>
int main(){
    char str[100];
    int i,freq[256]={0};
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    printf("Frequency of each character,\n");
    for(i=0;str[i]!='\0';i++){
        if(freq[(unsigned char)str[i]]!=0){
            printf("%c = %d\n",str[i],freq[(unsigned char)str[i]]);
            freq[(unsigned char)str[i]]=0;
        }
    }
    return 0;
}