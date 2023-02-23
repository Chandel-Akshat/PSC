#include <stdio.h>

void rec(int n,char x,char y,char z){
    if(n==0){
        printf("Move disk 1 from rod %c to rod %c\n",x,y);
        return;
    }
    rec(n-1,x,y,z);
    printf("Move disk %d from rod %c to rod %c\n",n,x,z);
    rec(n-1,z,y,x);
}


int main(){
    int n = 4;
    rec(n,'A','B','C');
    return 0;
}