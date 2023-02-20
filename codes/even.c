#include <stdio.h>
 int main(){
    int num,temp;
    scanf("%d",&num);
    temp=num;
    temp =temp%2;
    if(temp==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
 }
