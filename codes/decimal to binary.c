#include<stdio.h>
void Dec_bin(n){
    int binaryNum[32];
    int i=0;
    while(n>0){
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=n-1; j >= 0; j--){
        printf("%d",binaryNum[j]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    Dec_bin(n);
    return 0;
}