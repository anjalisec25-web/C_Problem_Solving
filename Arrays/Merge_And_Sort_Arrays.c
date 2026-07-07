#include <stdio.h>
int main(){
    int n,i;
    printf("Enter Number of values in Array 1:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("\nEnter Value:");
        scanf("%d",&a[i]);
    }
    int m,j;
    printf("\nEnter Number of values in Array 2:");
    scanf("%d",&m);
    int b[m];
    for(j=0;j<m;j++){
        printf("\nEnter Value:");
        scanf("%d",&b[j]);
    }
    int c[n+m],temp=0;
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(j=0;j<m;j++){
        c[n+j]=b[j];
    }
    for(i=0;i<n+m;i++){
        for(j=i+1;j<n+m;j++){
            if(c[i]>c[j]){
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\nThe merged and sorted array is,\n");
    for(i=0;i<n+m;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
