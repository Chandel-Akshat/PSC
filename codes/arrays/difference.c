// Given an array/list A with N elements, you need to find difference of sum of elements at even indices (E) and sum of elements at odd indices(O).
// Note : Array/List indexes start from 0.
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sumeven=0;
    for (int i = 0; i < n; i+=2) 
    {
        sumeven=sumeven+arr[i];
    }
    int sumodd=0;
    for (int i = 1; i < n; i+=2) 
    {
        sumodd=sumodd+arr[i];
    }
    int diff=sumeven-sumodd;
    printf("%d",diff);
}   