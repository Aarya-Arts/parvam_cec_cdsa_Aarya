#include<stdio.h>
int main()
{
    int op1, op2; // declaration of op1 and op2
    //op1=10; // inisialization
    //op2=20; // inisialization
    printf(" enter two numbers:");
    scanf("%d", &op1);
    scanf("%d", &op2);
    float quo , a ,b;
    printf("enter two values for float data type:");
    int sum, diff, prod, rem;
    sum= op1 + op2;
    diff= op1 - op2;
    rem= op1 % op2;
    prod= op1 * op2;
    printf(" sum of %d and %d: %d\n", op1, op2, sum);
    printf(" diff of %d and %d: %d\n", op1, op2, diff);
    printf(" rem of %d and %d: %d\n", op1, op2, rem);
    printf(" prod of %d and %d: %d\n", op1, op2, prod);
    scanf("%f",&a);
    scanf("%f",&b);
    sum= op1 + op2;
    diff= op1 - op2;
    prod= op1 * op2;
    quo= a / b;
    rem= op1 % op2;
    printf(" quo of %.2f and %.2f: %.2f\n", a, b, quo);
}