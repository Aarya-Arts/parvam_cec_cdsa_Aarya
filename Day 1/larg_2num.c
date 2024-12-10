#include<stdio.h>
int main(){
    int num1, num2;
    printf("enter any two num:");
    scanf("%d %d", &num1, &num2);
    if(num1>num2){
        printf("true\n ");
    }
    else if(num1<num2){
        printf(" False\n");
    }
    else{
        printf("they are equal\n");
    }
    (num1>num2)?printf("true\n"):printf("false \n");
}