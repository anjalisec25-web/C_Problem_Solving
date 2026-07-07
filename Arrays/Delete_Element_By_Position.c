#include <stdio.h>
int main(){
    int n,i,pos;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        printf("\nEnter the values:");
        scanf("%d",&a[i]);
    }
    printf("\nEnter the position to be Deleted:");
    scanf("%d",&pos);
    for(i=pos;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}