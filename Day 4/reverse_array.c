#include<stdio.h>
int main(){
    int size;
    printf("enter the size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of an array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Original Array elements are as follows:");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nReversed array elements are as follows:");
    for (int i = size-1 ; i >=0; i--)
    {
        printf("%d\t",arr[i]);
        
    }
    
    
}

// tracing
//
// 