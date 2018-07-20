/*
  C Program to find First and Last Occurrence of given
  Character in a String
 */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void findChInString(char *str,char ch){
    int count=0,first=-1,last=-1;
    for(int i=0;i<strlen(str);i++){
        if(ch == str[i]){
         count++;
            if(count==1){
                first=i;
                last=i;
            }
            else{
                last=i;
            }
        }
    }
    (first>=0 && last>=0)?printf("first Occurrence :%d last Occurrence :%d",first+1,last+1):
                    printf("first Occurrence :%d last Occurrence :%d",first,last);
}
int main()
{
    char str[50],ch;
    int count,first,last;
    printf("Write something...\n");
    scanf("%[^\n]s",str);
    printf("enter a character to find it's first & last occurrence :\n");
    scanf(" %c",&ch);
    findChInString(str,ch);
    return 0;
}
/*
*/
