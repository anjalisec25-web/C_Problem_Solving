#include <stdio.h>
int main(){
    int n,i,l=0,sl=0;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Values:");
        scanf("%d",&a[i]);
    }
    l=a[0];
    sl=-1;
    for(i=0;i<n;i++){
        if(a[i]>l){
            sl=l;
            l=a[i];
        }
        else if(a[i]!=sl && a[i]>l){
            sl=a[i];
        }
    }
    printf("The second largest element is %d",sl);
    return 0;
}