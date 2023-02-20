// You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
// Try to only change in the input array itself and print the final swapped array.

#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i+=2)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
