#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int n1;
    scanf("%d",&n1);
    int arr1[n1];
    for(int i =0;i<n1;i++){
        scanf("%d",&arr[i]);
    }
    int n2=n+n1;
    int arr2[n2];
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    for(int i=0;i<n1;i++){
        arr2[i+n]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        for(int j=i+1;j<n2;j++){
            if(arr2[i]>arr2[j]){
                int temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    for (int i = 0; i < n2; i++)
    {
        printf("%d ",arr2[i]);
    }
    
}