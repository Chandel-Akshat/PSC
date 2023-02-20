// #include <stdio.h>
//  int main(){
//     int a,b;
//     int temp;
//     printf("Enter value of a");
//     scanf("%d",&a);
//     printf("Enter value of  b");
//     scanf("%d",&b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("the valuse of a nad b after swap is a=%d and b=%d",a,b);
//  }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the values of side 1:");
//     scanf("%d",&a);
//     printf("Enter the values of side 2:");
//     scanf("%d",&b);
//     printf("Enter the values of side 3:");
//     scanf("%d",&c);
//     if(a==b && b==c){
//         printf("equilateral triangle");
//     }
//     else if(a==b || b==c || a==c){
//         printf("isosceles triangle");
//     }
//     else{
//         printf("scalence triangle");
//     }
// }

#include<stdio.h>
int main(){
    int choice;
    int num,i,j,fact,prm;
    while(1){
        printf("\n 1. factorial");
        printf("\n 2. prime");
        printf("\n 3. odd or even");
        printf("\n 4. exit");
        printf("\n What's your choice ?");
        scanf("%d",&choice);
        int num,i,j;
        switch (choice){
            case 1:
            printf("Enter the number whose factorial you want?");
            scanf("%d",&num);
            fact=num;
            for(i=1;i<num;i++){
                fact=fact*i;
            }
            printf("the value of factorial is: %d", fact);
            break;
            case 2:
            printf("Enter the number for which you want to check wether prime or not?");
            scanf("%d",&num);
            prm=num;
            for(i=0;i<num;i++){
                prm=num%i;
                if(prm==0){
                    printf("the number is not prime");
                }
                else{
                    printf("the number given is prime");
                }
            }
            break;


        }
        
    }
}