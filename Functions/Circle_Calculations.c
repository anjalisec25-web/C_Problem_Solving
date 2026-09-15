#include <stdio.h>
float circumference(float r){
    return 2*3.14*r;
}
float diameter(float r){
    return 2*r;
}
float area(float r){
    return 3.14*r*r;
}
int main(){
    float r;
    printf("Enter Radius of Circle:");
    scanf("%f",&r);
    printf("Circumference=%.2f\n",circumference(r));
    printf("Diameter=%.2f\n",diameter(r));
    printf("Area=%.2f\n",area(r));
    return 0;
}