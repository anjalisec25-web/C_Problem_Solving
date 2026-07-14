#include <stdio.h>
int main(){
    int n,m,i,j;
    printf("Enter order of the Matrix:");
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
       for(j=0;j<m;j++){
        printf("\nEnter Values:");
        scanf("%d",&a[i][j]);
       }
    }
    printf("\nTransposed Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}