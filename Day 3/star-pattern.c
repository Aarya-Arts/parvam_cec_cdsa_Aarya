#include<stdio.h>
int main(){
    int row, column;
    printf("enter the rows and columns:");
    scanf("%d %d", &row, &column);
    for ( int i=0; i < row; i++){
        for ( int j=0; j < column; j++){
            printf("*\t");
        }
        printf("\n");
    }
}

// r = 3, c = 3
// step1 => i = 0, 0 < 3 - T
//  j = 0, 0 < 3 - T
//  *
// step2 => i = 0, 0 < 3 - T
//          j = 1, 1 < 3 - T
//           * * 
// step3 => i = 0, 0 < 3 - T
//          j = 2, 2 < 3 - T
//           * * *
// step4 => i = 0, 0 < 3 - T
//          j = 3, 3 < 3 - F
//           * * *
// step5 => i = 1, 1 < 3 - T
//          j = 0, 0 < 3 - T
//           * * *
//           *
// step6 => i = 2, 2 < 3 - T
//          j = 0, 0 < 3 - T
//           * * *
//           * *
// step7 => i = 3, 3 < 3 - F
//          j = 0, 0 < 3 - T
//           * * *
// 
//           * * *
