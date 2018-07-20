/*
*C Program to Read a String and find the Sum of all Digits in the String
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int isDigit(char str){

    if(str>='0' && str<='9')
        return (int)str;
    return 0;
}
void sumDigitsInStr(char *str){
       int count=0,sum=0;
    for(int i=0;str[i];i++){
        if(isDigit(str[i])){
            count++;
            sum+=str[i]-'0';//[57-48]-48
        }
    }
    printf("Number of digits in in the string %s: %d \n",str,count);
    printf("sum of all digits present in the string %s: %d\n",str,sum);
 }
void main()
{
    char str[50];
    int count=0,sum=0;
    puts("Enter a string containing both digits and alphabet \n");
    gets(str);
    sumDigitsInStr(str);
}

