#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];
    int i,count[26]={0},flag=1;
    printf("Enter String 1:");
    fgets(a,sizeof(a),stdin);
    printf("Enter String 2:");
    fgets(b,sizeof(b),stdin);
    if(strlen(a)!=strlen(b)){
        flag=0;
    }
    else{
        for(i=0;a[i]!='\0';i++){
            count[a[i]-'a']++;
            count[b[i]-'a']--;
        }
        for(i=0;i<26;i++){
            if(count[i]!=0){
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        printf("It's a Anagram.");
    }
    else{
        printf("Not a Anagram.");
    }
    return 0;
}