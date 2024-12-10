#include<stdio.h>
int main (){
    int row ;
    printf("enter the number of rows:");
    scanf("%d",&row);
    for(int i=1; i <= row; i++){     
         for(int j=1; j <= row - i; j++)  {
            printf("\t");
         }   
         for(int j=1; j <= (2 * i - 1); j++){
            printf("*\t");
         }
         printf("\n");
    }
    
for(int i=row-1; i >0; i--){        
         for(int j=1; j <= row - i; j++)  {
            printf("\t");
         }   
         for(int j=1; j <= (2 * i - 1); j++){
            printf("*\t");
         }
         printf("\n");
}
}

