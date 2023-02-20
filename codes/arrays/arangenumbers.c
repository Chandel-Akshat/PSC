#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    if (n % 2 == 0)
    {
        int j = 1;
        int k = 2;
        for (int i = 0; i < n / 2; i++)
        {
            arr[i] = j;
            j++;
            j++;
        }
        for (int i = n - 1; i > n / 2 - 1; i--)
        {
            arr[i] = k;
            k++;
            k++;
        }
    }
        if (n % 2 != 0)
    {
        int j = 1;
        int k = 2;
        for (int i = 0; i < n / 2 + 1; i++)
        {
            arr[i] = j;
            j++;
            j++;
        }
        for (int i = n - 1; i > n / 2; i--)
        {
            arr[i] = k;
            k++;
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}