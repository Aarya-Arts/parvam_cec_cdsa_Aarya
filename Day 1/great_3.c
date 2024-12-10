#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&num1, &num2, &num3);
    if(num1 > num2){
        if(num1 > num3){
            printf("number1 is greatest");
        }
        else{
            printf("number3 is greatest");
        }

        
    }
    else{
        if(num2>num3){
            printf("number2 is greatest"); }
        else{
            printf("number3 is the greatest");
        }    
    }
    }
    if ((num1>num2) && (num2>num3)){
        printf(" number1 is the greatest");
    }
    else if( num2 > num3){
        printf("number2 is the greatest");
    }
    else{
        printf("NUMBER3 is the greatest");
    }