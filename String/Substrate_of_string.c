#include <stdio.h>
int main(){
    char a[100],b[100];
    int i,j,found=0;
    printf("Enter String 1:");
    scanf("%s",a);
    printf("Enter String 2:");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++){
        for(j=0;b[j]!='\0';j++){
            if(a[i+j]!=b[j]){
                break;
            }
        }
        if(b[j]=='\0'){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Substring Found.");
    }
    else{
        printf("Substring not Found.");
    }
    return 0;
}