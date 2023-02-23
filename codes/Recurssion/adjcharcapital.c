// Given a string s, compute recursively a new string where identical
// adjacent characters are seperated by capital letter of that letter

#include <stdio.h>
#include <string.h>

void compute(char str[],char str2[],int i,int j,char c){
    str2[j]=str[i];
    if(i==c-1){
        return;
    }
    if(str[i]==str[i+1]){
        str2[++j]=str[i]-32;
    }
    compute(str,str2,i++,j++,c);
}

int main(){
    char str[100];
    char str2[100]; 
    gets(str);
    char c =strlen(str);
    compute(str,str2,0,0,c);
    printf("%s",str2);
}