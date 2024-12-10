#include<stdio.h>
#define PI 3.142
float area( float rad){
    return PI * rad * rad;
}
float circumference( float rad){
       return 2 * PI * rad;
}
int main(){
    float radius , result;
    printf("enter the radius of the circle:");
    scanf("%f",&radius);
    result = area(radius);
    printf("Area of the circle for the given radius(%f):%f\n",radius, result);
    result= circumference(radius);
    printf("circumference of the circle for the given radius(%f):%f",radius,result);
}