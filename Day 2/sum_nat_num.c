#include<stdio.h>
int main(){
    int num, sum=0;
    printf("enter a positive number:");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        sum = sum + i;
    }
     printf("the sum of natural numbers gtom 0 to %d:%d", num, sum);
}

// tracing
// num = 6
// step 1: i = 0 , 0 <= 6 -T
//        sum = 0 + 0 = 0
// step 2: i = 1 , 1 <= 6 -T
//        sum = 0 + 1 = 1
// step 3: i = 2 , 2 <= 6 -T
//        sum = 1+ 2 = 3
// step 4: i = 3 , 3 <= 6 -T
//        sum = 3 + 3 = 6
// step 5: i = 4 , 4 <= 6 -T
//        sum = 6 + 4 = 10
// step 6: i = 5 , 5 <= 6 -T
//        sum = 10 + 5 = 15
// step 7: i = 6 , 6 <= 6 -T
//        sum = 15 + 5 = 21
// step 7: i = 7 , 7 <= 6 -F



