#include<stdio.h>
int sqr(int a){
    return a * a ;

}
int cube(int a){
    return a * a * a;
}
int main(){
    int num, result;
    printf("enter  a number to find the cube and sqr  ");
    scanf("%d",&num);
    result= sqr(num);
    printf("the square of %d is: %d\n",num,result);
    result=cube(num);
    printf("the cube of %d is: %d",num,result);

}