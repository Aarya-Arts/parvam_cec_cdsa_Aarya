#include<stdio.h>
int main(){
    int num, sqr,i=1;
    printf("enter the range to be chekced for a perfect square:");
    scanf("%d",&num);
    do
    {
        if((sqr = (i*i))< num){
            printf("%d\n",sqr);
            i++;

        }
    } while (num>0);
    
    
}
    
    // tracing
    // num=10
    // step1 = sqr:  1 * 1 = 1 < 10 
            //   1
            // 10 > 0 - T
    // step1 = sqr:  2* 2 = 2 < 10 
            //   1 4 
            // 10 > 0 - T
    // step1 = sqr:  3 * 3 = 9 < 10 
            //   1 4 9
            // 10 > 0 - T
    // step1 = sqr:  4 * 4 = 16 < 10
    //  false 