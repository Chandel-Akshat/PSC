#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int search;
    scanf("%d",&search);
    for(int i = 0;i<n;i++){
        if(arr[i]==search){
            printf("%d",i);            
        }
        if(i==false){
            printf("-1");
        }
    }
}