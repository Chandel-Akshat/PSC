// #include <stdio.h>

// int main()
// { 
//     float fah, cent;
//     printf("\nEnter The temperature in Fahrenheit(fah):");
//     scanf("%f",&fah);
//     cent = 5.0/9.0*(fah-32);
//     printf("\nEnter The temperature in Centigrade(cent): %f",cent);
//     return 0;    
// }


// #include <stdio.h>

// int main(){
//     int A0h, A0w;
//     int A1h, A1w;
//     int A2h, A2w;
//     int A3h, A3w;
//     int A4h, A4w;
//     int A5h, A5w;
//     int A6h, A6w;
//     int A7h, A7w;
//     int A8h, A8w;

//     A0h=1200;
//     A0w=850;
//     printf("\n Length of A0 = %d and breadth of A0 = %d", A0h, A0w);
    
//     A1h=A0w;
//     A1w=A0h/2;
//     printf("\n Length of A1 = %d and breadth of A1 = %d", A1h, A1w);

//     A2h=A1w;
//     A2w=A1h/2;
//     printf("\n Length of A2 = %d and breadth of A2 = %d", A2h, A2w);

//     A3h=A2w;
//     A3w=A2h/2;
//     printf("\n Length of A3 = %d and breadth of A3 = %d", A3h, A3w);

//     A4h=A3w;
//     A4w=A3h/2;
//     printf("\n Length of A4 = %d and breadth of A4 = %d", A4h, A4w);

//     A5h=A4w;
//     A5w=A4h/2;
//     printf("\n Length of A5 = %d and breadth of A5 = %d", A5h, A5w);

//     A6h=A5w;
//     A6w=A5h/2;
//     printf("\n Length of A6 = %d and breadth of A6 = %d", A6h, A6w);

//     A7h=A6w;
//     A7w=A6h/2;
//     printf("\n Length of A7 = %d and breadth of A7 = %d", A7h, A7w);

//     A8h=A7w;
//     A8w=A7h/2;
//     printf("\n Length of A8 = %d and breadth of A = %d", A8h, A8w);

//     return 0;
// }

#include <stdio.h>

int main(){
    int old_lenghth, old_breadth;
    int new_length, new_breadth;
    old_lenghth = 1200;
    old_breadth = 850;
    printf("\nDimension of A0 = %d X %d", old_lenghth, old_breadth);

    for(int i=1;i<9;i++){
        new_length=old_breadth;
        new_breadth=old_lenghth/2;
        printf("\nDimension of A%d = %d X %d", i, new_length, new_breadth);
        old_lenghth=new_length;
        old_breadth=new_breadth;       
    }
    return 0;
}
