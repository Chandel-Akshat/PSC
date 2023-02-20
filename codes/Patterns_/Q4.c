#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        int m=1;
        for (int j = n; j>i; j--)
        {
            
            printf("%d",m);
            m++;
        }
        printf("\n");
        
    }
    
    
    
    
    }