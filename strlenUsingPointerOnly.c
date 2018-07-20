/*
*C Program to Find Length of the String using Pointer
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int getLength(char *str){
    int count=0;
    while(*str !='\0'){
        puts(str);
        count++;
        str++;
    }
    return count;
}
int main()
{
    char str[50];
    puts("write something..");
    gets(str);
    int len=getLength(str);
    printf("\n the total length of %s : %d\n",str,len);
    return 0;
}
/*
*/
