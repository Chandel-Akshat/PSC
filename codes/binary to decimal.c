#include<stdio.h>

void binTodec(int num){
    int n=num;
    int dec_value=0;
    int base=1
    while(num>0){
        int last_digit=n%10;
        n=n/10;
        dec_value +=last_digit*base;
        base=base*2;
    }
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    return 0;
}