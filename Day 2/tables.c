#include<stdio.h>
int main(){
    int num;
    printf("enter a number to get the table:");
    scanf("%d",&num);
    for(int i=1; i<=10;i++ ){
        printf("%d * %d: %d\n",num,i,i*num);
    }
}