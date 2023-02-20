#include<stdio.h>
#include<stdbool.h>

bool isprimeNumber(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void primeNumber(int n){
    for (int i = 2; i <= n; i++)
        if (isprimeNumber(i))
            printf("%d\n",i);
}

void fibonacciSeries(int n){
    int f1=1;
    int f2=1;
    int f3=f1+f2;
    for(int i=3;i<n;i++){
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    printf("%d",f3);
}

// void trailingzeroFactorial(int n){
//     int fact;
//     fact=1;
//     int count=0;
//     for(int i=1; i<=n;i++){
//         fact=fact*i;
//     }
//     for(int j=fact;j%10!=0;true){
//         if(j%10==0){
//             count++;
//         }
//     }
//     printf("%d",count);
// }

void countChar(){

}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("\nNo. of prime numbers till number entered are:\n");
    primeNumber(num);

    printf("\nthe nth element of Fibonacci series with f1 & f2=1 is:\n");
    fibonacciSeries(num);

    // printf("\nThe number of Trailing Zeros in Factorial are:\n");
    // trailingzeroFactorial(num);

    printf("\nThe number of char/integers/white spacesis as followed:");
    countChar();


}