#include<stdio.h>
int main(){
    int num;
    printf("enter the range to print the numbers:");
    scanf("%d",&num);
    // for (initialzation, condition; incremant/decremant)
//     printf("the numbers between 0 to %d are as follows:\n",num);
//     for(int i=0; i<=num; i++){
//         if(i%2==0){
//              printf("%d\n",i);
//         }
        
//     }
// }
    printf("the odd numbers between 0 to %d are as follows:\n",num);
    for(int i=0; i<=num; i++){
        if(i%2!=0){
             printf("%d\n",i);
        }
        
    }
}
