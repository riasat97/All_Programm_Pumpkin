/*
 * Program to Reverse a String
 */
#include <stdio.h>
#include <stdlib.h>
int getLength(char *str){
    int len=0;
    for(int i=0;str[i];i++)
        len++;
    return len;
}

int main()
{
    char str[50],rev[50];
    int i,j;
    printf("enter something to reverse :\n");
    gets(str);
    int len=getLength(str);

    for(i=len-1,j=0;i>=0;i--){
        rev[j++]=str[i];
    }
    rev[j]='\0';

    printf("Reverse of %s is %s",str,rev);
    return 0;
}
/*
*/
