// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int temp=num;
    int binary[32];
    int i;
    while(temp>0){
        binary[i]=temp%2;
        temp=temp/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    return 0;
}