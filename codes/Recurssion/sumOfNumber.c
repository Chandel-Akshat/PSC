#include <stdio.h>
int rec(int n){
    if(n==0){
        return 0;
    }
    int rem=n%10;
    rem+=rec(n/10);
    return rem;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum =rec(n);
    printf("%d",sum);
}
