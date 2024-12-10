#include<stdio.h>
int fibo(int num){
    if(num==0){
        return 0;
    } else if (num == 1){
        return 1;
    } else {
        return fibo(num-1) + fibo(num - 2);
    }
}
    int main(){
        int num, i;
        printf("enter the number to print the fibonacci series:");
        scanf("%d",&num);
        printf("the fibonacci series form 0 to %d is : %d\n",num);
        for (i=0; i < num; i++){
            printf("%d\t", fibo(i));
       }
    }


// num=3
// i = 0, 0 < 3 - T
// fibo(0) - 0
// i = 1, 1 < 3 - T
// fibo(1) - 0 1
// i = 2, 2< 3 - T
// fibo(1) - fib(3-1) + fib(3-2)
//         -  0 1 fib(2) + fib(1)
//         -  0 1 fib(2-1) + fib(2-2) + 1
//         -  0 1 1 2 

        

    