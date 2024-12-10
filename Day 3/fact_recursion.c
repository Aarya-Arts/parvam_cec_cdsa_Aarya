#include<stdio.h>
#include<conio.h>
int fact(int num){
    if(num==0 || num== 1){
    return 1;
}
return num * fact(num - 1);
}
int main(){
    int num, result;
    printf("enter a number to find the factorial:");
    scanf("%d",&num);
    result= fact(num);
    printf("The factorial of %d is : %d",num,result);
}

// fact = 3
// result = fact(3)
// step1: 3 - 0 or 1 - F
//        return 3 * fact(3-1) = 3 * fact(2)
//                                    return 2 * fact(2-1)=> 2 * fact(1)
//                                                        => 2 * 1
//              3 * 2 * 1 = 6