#include<stdio.h>
int main(){
    int size;
    printf("enter the size of an array:");
    scanf("%d",&size);// input for the size of the array 
    int arr[size];
    printf("enter the (%d) elements of an array:",size);//input for the number of elements in the array
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array elements are as follows:\n");
    for (int i = 0; i < size; i++)
    {
        printf("the elements in index arr[%d]:%d\n",i,arr[i]);
    }
    
}