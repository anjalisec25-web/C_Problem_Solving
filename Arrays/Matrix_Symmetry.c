#include <stdio.h>
int main(){
    int n,m,i,j,flag=1;
    printf("Enter the order of the matrix:");
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter Values:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]!=a[j][i]){
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        printf("The given matrix is symmetric");
    }
    else{
        printf("The given matrix is not symmetric");
    }
    return 0;
}