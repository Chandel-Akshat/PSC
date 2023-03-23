#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("hello.c","r");
    char ch;
    while(1){
        ch=fgetc(fp);
        if (ch==EOF){
            break;
        }
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);


    return 0;
}