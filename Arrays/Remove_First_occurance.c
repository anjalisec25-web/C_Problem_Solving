#include <stdio.h>
int main(){
    int n,i,j,num=0;
    printf("Enter number of values in the Array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter values:");
        scanf("%d",&arr[i]);
    }
    printf("\nEnter a number:");
    scanf("%d",&num);
   for(i=0;i<n;i++){
    if(arr[i]==num){
        for(j=i;j<n;j++){
            arr[j]=arr[j+1];
        }
        n--;
        break;
    }
   }
    printf("The Array after removing first occurance of %d\n",num);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}