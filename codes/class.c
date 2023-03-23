// Online C compiler to run C program online
#include <stdio.h>
// typedef int i;
// typedef struct node st;
// struct node{
//     i a;
//     char b;
// };
// int main(){
//     st obj1;
//     obj1.a=10;
//     printf("%d",obj1.a);
//     return 0;
// }
// typedef int arr[10];
// int main(){
//     arr n ={1,2,3,4,5,6,7,8,9,10};
//     for(int i =0;i<10;i++){
//         printf("%d",n[i]);
//     }
// }

// typedef struct A_tag
// {
//     char a;
//     short int b;    
// }structA_t;

// typedef struct B_tag
// {
//     short int b;
//     char a;
//     int c;
// }structB_t;

// typedef struct C_tag
// {   
//     char a;
//     double d;
//     int c;
// }structC_t;

// typedef struct D_tag
// {
//     double d;
//     int c;
//     char a;
// }structD_t;


// int main(){
//     printf("A : %lu\n",sizeof(structA_t));
//     printf("B : %lu\n",sizeof(structB_t));
//     printf("C : %lu\n",sizeof(structC_t));
//     printf("D : %lu\n",sizeof(structD_t));
// enum color{Red=1,Green=3,Blue};
// int main(){
//     printf("%d\n",Red);
//     printf("%d\n",Green);
//     printf("%d\n",Blue);

enum State {WORKING =0,FAILED,FREEZED};
enum State currState=2;
enum State Findstate(){
    return currState;
}
int main(){
    (Findstate()==WORKING)?printf("Working"):printf("Not Working");
    printf("%d",Findstate());
}