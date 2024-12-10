#include<stdio.h>
int main(){
    int size;
    printf("enter the number of elements:");
    scanf("%d",&size);
    int arrOfnum[size];
    printf("enter %d elements into an array:",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arrOfnum[i]);

    }
    int max;
    int min;
    max= min=arrOfnum[0];
    for (int i = 0; i < size; i++)
    {
        if (arrOfnum[i]> max)
        {
            max= arrOfnum[i];
        }
        if (arrOfnum[i]<min)
        {
            min=arrOfnum[i];
        }
       }
       printf("the largest element in the given array is:%d\n",max);
       printf("the smallest element in the given array is:%d\n",min);
}
// 
// 
// n=4
// arr[4]
// 10 20 30 40
// min=10
// max=10
// a[0] 10 > 10 - F
// a[1] 20 > 10 = 20 - T
// a[2] 30 > 10 = 30 - T
// a[3] 40 > 10 = 40 - T 
//
// a[0] 10 < 10 - F
// a[1] 20 < 10 = 20 - F
// a[2] 30 < 10 = 30 - F
// a[3] 40 < 10 = 40 - F 
//
// 
// 