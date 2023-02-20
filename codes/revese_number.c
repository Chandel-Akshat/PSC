#include <stdio.h>

int main(){
    int number;
    int answer;
    int remainder;
    printf("\nEnter the number to reverse: ");
    scanf("%d",&number);
    while(number){
        remainder=number%10;
        answer=answer*10+remainder;
        number/=10;
    }
    printf("The reverse of the number is : %d",answer);
    return 0;
}