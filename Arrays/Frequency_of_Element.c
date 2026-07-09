#include <stdio.h>
int main(){
    int n,i,j,count=0;
    printf("Enter Number of Values in the Array:");
    scanf("%d",&n);
    int a[n],visited[n];
    for(i=0;i<n;i++){
        printf("Enter Values:");
        scanf("%d",&a[i]);
        visited[i]=0;
    }
    for(i=0;i<n;i++){
        count=0;
        if(visited[i]!=1){
            for(j=0;j<n;j++){
                if(a[i]==a[j]){
                    count++;
                    visited[j]=1;
                }
            }
            printf("\nThe Frequency of the number %d is %d",a[i],count);
        }
    }
    return 0;
}