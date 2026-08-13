#include <stdio.h>
int main(){
    char str[100];
    int a=0,d=0,s=0,i;
    printf("Enter a String:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if((str[i]>='A'&& str[i]<='z')||(str[i]>='a'&&str[i]<='z')){
            a++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            d++;
        }
        else{
            s++;
        }
    }
    printf("No. of Alphabets:%d\n",a);
    printf("No. of Digits:%d\n",d);
    printf("No. of Special Characters:%d",s);
    return 0;
}