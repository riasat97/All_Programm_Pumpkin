#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
//str rev using recursion
char *recursiveStrRev(char * str,char *rev,int len){
    static int i=0;
    if(len<0){
      rev[i]='\0';
      return rev;
    }
    rev[i++]=str[len--];
    recursiveStrRev(str,rev,len);
}
int main(){
    char str[100],rev[100];
    printf("write something..:\n");
    gets(str);
    recursiveStrRev(str,rev,strlen(str)-1);
    puts(rev);
}
/*
*/
