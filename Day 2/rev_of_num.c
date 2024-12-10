#include<stdio.h>
int main(){
    int num, rev=0,org;
    printf("enter a number to be reversed:");
    scanf("%d",&num);
    // while loop condition
    org=num;
    printf("entered number: %d\n",num);
    while (num>0)
    {
        rev = rev*10 + num % 10;
        num= num /10;

    }
    printf(" Reversed number : %d\n",rev);
    if(org==rev){
        printf(" given number is a palindrome!");

    }
    else{
        printf(" given number is not a palindrome!");

    }

}
// // tracing
// // time complexity
// looping statements like [" while","for","do while"]= O(logn)
// the // time complexity is 

// num= 683
// step1: rev =  0 * 10 + 683 % 10 = 0 + 3 = 3
//        num = 683 / 10 = 68
// step2: rev=  3 * 10 + 68 % 10 = 30 + 8 = 38
//        num = 68 / 10 = 6
// step3: rev=  38 * 10 + 6 % 10 = 380 + 6= 386
//        num = 6 / 10 = 0 
// step4: 0 > 0 - F


