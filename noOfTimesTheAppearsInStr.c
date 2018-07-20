/*
  * C program to accept a string and find the number of times the word
  * 'the' appears in that string
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char* toLower(char ch){
    if(ch>='A' && ch<='Z')return ch+32;
    if(ch>='a' && ch<='z')return ch;
    return 0;//will return null
}
noOfTimesTheAppearsInStr(char *str){
    int count=0,len;
    len=strlen(str)-3;
    for(int i=0;i<=len;i++){
        int t=(toLower(str[i])=='t');
        int h=(toLower(str[i+1])=='h');
        int e=(toLower(str[i+2])=='e');
        int space =(str[i+3] == ' ' || str[i+3] == '\0');
        if(t&&h&&e&&space){
            count++;
        }
    }
    printf("the appeared in string %d times",count);
}
int main()
{
    char str[50];
    gets(str);
    noOfTimesTheAppearsInStr(str);//the a the
    return 0;
}
/*
think of just the
start with the only
*/
