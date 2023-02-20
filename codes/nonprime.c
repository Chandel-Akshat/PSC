#include <stdio.h>

int main() {
    int num,temp;
    int output=1;
    temp=num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        int remainder=temp%i;
        output=output*remainder;
    }
    if(output==0){
        printf("prime");
    }
    else{
        printf("Nonprime");
    }
}

