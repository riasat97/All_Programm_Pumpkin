#include<stdio.h>
#include<string.h>

int main(){
    char str[30]={0},newStr[40];
    int count=0;
    char vow[12]={'a','e','i','o','u','A','E','I','O','U'};
    puts("enter something may contain some vowels");
    gets(str);
    for(int i=0;i!=str[i];i++){
      for(int j=0;j<strlen(vow);j++){
        if(str[i]==vow[j]){
            count++;
            break;
        }
      }
    }
    printf("no. of vowels found in %s : %d",str,count);
}
