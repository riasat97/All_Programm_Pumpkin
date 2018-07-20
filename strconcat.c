/*
*C Program to Concat Two Strings without Using Library Function
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void strConcat(char *str1,char *str2){
    char str[50];
    strcpy(str,str1);
    int len=strlen(str1),i,j;
    for( i=len,j=0;j<strlen(str2);i++,j++){
        str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("%2s+%2s = %s",str,str2,str1);
}
int main()
{
    char str1[50],str2[50];
    printf("enter 1st string :\n");
    gets(str1);
    printf("enter 2nd string :\n");
    gets(str2);
    strConcat(str1,str2);

    return 0;
}
/*
*/
