// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,i;
    printf("enter the number you want to convert");
    scanf("%d",&num);
    int temp=num;
    
    
    // // ODD OR EVEN NUMBER
    // temp=temp%2;
    // if(temp==0){
    //     printf("even");
    // }
    // else{
    //     printf("odd");
    // }
    
    
    
    // // Fibonacci Series
    // int t1=0;
    // int t2=1;
    // int t3=t1+t2;
    // printf("%d%d",t1,t2);
    // for(i=3;i<=num;++i){
    //     printf("%d",t3);
    //     t1=t2;
    //     t2=t3;
    //     t3=t1+t2;
    // }
    
    
    

    // // PRIME OR NOT
    // int remainder;
    // int check=1;
    // for(i=2;i<temp;i++){
    //     remainder=temp%i;
    //     check=check*remainder;
    // }
    // if(check==0){
    //     printf("nonprime");
    // }
    // else{
    //     printf("prime");
    // }
    
    
    
// // REVERSE A NUMBER
    // int remainder,output;
    // while(temp>0){
    //     remainder=temp%10;
    //     output=output*10+remainder;
    //     temp=temp/10;
        
    // }
    // printf("%d",output);
    
    
    
// // BINARY TO DECIMAL
//     int decimal=0;
//     int base=1;
//     while(temp>0){
//     int last=temp%10;
//     temp=temp/10;
//     decimal+=last*base;
//     base=base*2;
//     }
//     printf("%d",decimal);
    
    
    

// DECIMAL TO BINARY CONVERSION
    // int binary[32];
    // while(temp>0){
    //     binary[i]=temp%2;
    //     temp=temp/2;
    //     i++;
    // }
    // for(int j=i-1;j>=0;j--){
    //     printf("%d",binary[j]);
    // }
    
    return 0;
    
}