#include <stdio.h>
int main(){
    int n,i,j,temp=0;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter values:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
       }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}