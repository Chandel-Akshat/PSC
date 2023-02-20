// Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
// Fibonacci Series is defined by the recurrence
//     F(n) = F(n-1) + F(n-2)
// where F(0) = 0 and F(1) = 1

#include<stdio.h>
#include<stdbool.h>

int main(){
    int f0=0;
    int f1=1;
    int f3=f0+f1;
    int n;
    scanf("%d",&n);
    int arr[1000];
    arr[0]=0;
    arr[1]=1;
    arr[2]=1;
    for(int i=3;i<=1000;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    bool j=false;
    for(int i=0;i<=1000;i++){
        if(arr[i]==n){
            j=true;
            printf("true");
            break;
        }
        if(j==false){
            printf("false");
            break;
        }

    }
}