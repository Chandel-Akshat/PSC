#include <stdio.h>

int main() {
    
        int num, temp;

        scanf("%d",&num);
        temp=num;
    
        while(num%4!=0){
            num++;
            printf("NO\nnext leap year is:%d",num);
        }
        
        while (temp%4==0){
            printf("YES");
            break;
        }
}
