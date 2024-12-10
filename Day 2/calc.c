#include<stdio.h>
int main(){
    char operator;
    float op1, op2, result;
    printf("enter the operator(+,-,*,/,):");
    scanf("%c", &operator);
    printf("Enter any two numbers");
    scanf("%.2f %.2f",&op1, &op2);
    switch (operator)
    {
    case '+':
        result=op1 + op2;
        printf("sum of %.2f & %.2f:%F",op1 , op2, result);
        break;
    case '-':
        result=op1 - op2;
        printf("difference of %F & %.2f:%.2f",op1 , op2, result);
        break;
    case '*':
        result=op1 * op2;
        printf("product  of %.2f & %.2f:%.2f",op1 , op2, result);
        break;
    case '/':
        result=op1 / op2;
        printf("quotient of %.2f & %.2f:%.2f",op1 , op2, result);
        break;
    default:
        printf("invalid input.please try again with proper operator!");
        break;
        
    }
    return 0;

}