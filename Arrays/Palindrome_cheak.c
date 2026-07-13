#include <stdio.h>
int main(){
    int n,i,j=0,flag=1;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        printf("Enter values:");
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("The Array is a Palindrome.");
    }
    else{
        printf("The Array is not a Palindrome,");
    }
    return 0;
}