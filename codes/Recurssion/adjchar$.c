// Create a new string or in the old one where idnetical character have a $between them

#include<stdio.h>
#include<string.h>

void compute(char str[],char str2[],int i,int c){
    str2=str+str[i];
    if(i==c-1){
        return;
    }
    if(str[i]==str[i+1]){
        str2=str2+'$';
    }
    compute(str,str2,i+1,c);
}

int main(){
    char str[100];
    char str2[100];
    gets(str);
    int i=0;
    int c= strlen(str);
    compute(str,str2,i,c);
    printf("%c",str2[1]);
}