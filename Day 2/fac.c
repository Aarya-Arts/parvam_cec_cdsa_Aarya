#include<stdio.h>
int main(){
    int num; 
    long fact=1;
    printf("enter a num to find the factorial:");
    scanf("%d",&num);
    for (int  i = 1; i <=num; i++)
    {
        fact=fact*i;
    }
    
    printf("factorial of (%d):%d",num,fact);

}

// tracing the factorial's
// num=5
// step 1: i=1,1<=5 - T
//          fact=1*1= 1
// step 2: i=2 , 2<=5 - T
//          fact= 1*2=2 
// step 3: i=3 , 3<=5 - T
//          fact= 2*3=6
// step 4: i=4 , 3 < = 5 - T
//          fact= 6 * 4 = 24
// step 5: i=5 , 5 < = 5 - T
//          fact= 24* 5 = &&
// Step 6 : i=6 , 6 < = 5 - F
         
