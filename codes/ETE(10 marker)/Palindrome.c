#include<stdbool.h>
#include <stdio.h>
int count(char arr[]){
  int count =0;
  int i=0;
  while(arr[i]!='\0'){
    count ++;
    i++;
  }
  return count;
}



bool checkPalindrome(char str[]){
int n=count(str);
int start =0;
int end =n-1;
while(start<end){
  if(str[start]==str[end]){
    start++;
    end--;
    continue;
  }
  else{
    return false;
  }
  // start++;
  // end--;
}
return true;
}

int main() {
      
      char str[10000];
      scanf("%s", str);
      //fgets(str, 10000, stdin);
     // printf("%s",str);
      int ans = checkPalindrome(str);
      if(ans == true){
        printf("true\n"); 	
      }else{
        printf("false\n"); 	
      }      

}


