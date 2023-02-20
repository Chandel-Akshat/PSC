#include<stdio.h>

int main(){
    int i,j,k,n;
    scanf("%d",&n);
    i=0;
    j=1;
    k=i+j;
    printf("%d%d",i,j);
    for(int m=3;m<=n;m++){
        printf("%d",k);
        i=j;
        j=k;
        k=i+j;

    }
    return 0;
}