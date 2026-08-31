#include <stdio.h>
int main(){
    char str[100],maxchar='\0';
    int count[256]={0},i,max=0;
    printf("Enter a String:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        count[(unsigned char)str[i]]++;
    }
    for(i=0;i<256;i++){
        if(count[i]>max){
            max=count[i];
            maxchar=i;
        }
    }
    printf("Maximum occured character: %c\n",maxchar);
    printf("Maximum occured Times:%d",max);
    return 0;
}