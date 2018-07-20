/*
 * * C Program to Find the First Occurence of the any Character of
   * String2 in string1 & also its Position
 *
 */
#include <stdio.h>
#include <stdlib.h>
int found1stOccurenceOfaCharOfStr2InStr1(char *str1,char *str2){
     int i,j;
     for( i=0;i<strlen(str2);i++){
        for( j=0;j<strlen(str1);j++){
            if(str2[i]==str1[j]){
                return j;
            }
        }
     }
     return -1;
 }
void find1stOccurenceOfaCharOfStr2InStr1(char *str1,char *str2){
     int i,j,match=0;
     for( i=0;str2;i++){
        for( j=0;str1;j++){
            if(str2[i]==str1[j]){
                match=1;
                break;
            }
        }
        if(match==1)break;
     }
     if(i==strlen(str2)){
        printf("\nnone of the characters of string2 match with mone of characters of string1");
     }
     else
     printf("First occurence of a char of str2 in str1 is in %d position of str1 and the character is %c \n",j,str2[i]);
 }
int main()
{
    char str1[50],str2[50];
    puts("Write something...:");
    gets(str1);
    puts("write something that matches at least a character with your previously written text  :");
    gets(str2);
   // find1stOccurenceOfaCharOfStr2InStr1(str1,str2);
    int position=found1stOccurenceOfaCharOfStr2InStr1(str1,str2);
    if(position<0)printf("\nnone of the characters of string2 match with mone of characters of string1");
    else printf("First occurence of a char of str2 in str1 is in %d position of str1 and the character is %c \n",position+1,str1[position]);
    return 0;
}
/*


*/
