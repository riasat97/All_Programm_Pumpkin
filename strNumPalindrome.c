/*
 * Program to check a number or string palindrome
 */
#include <stdio.h>
#include <stdlib.h>
int getLength(char *str){
    int len=0;
    for(int i=0;str[i];i++)
        len++;
    return len;
}
void isStrPalindrome(char *str){
    int low=0,high=getLength(str)-1;
    while(low<high){
        if(str[low++]!=str[high--]){
            printf("%s is not palindrome\n",str);
            return;
        }
    }
    printf("%s is palindrome\n",str);
}
void isNumberPalindrome(num){
    int rev=0,n,rem;
    n=num;
    while(n){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    (num==rev)?printf("%d is palindrome\n",num):printf("%d is not palindrome\n",num);
}
int main()
{
    char str[50]="mom";
    int num=121;
    isStrPalindrome(str);
    isNumberPalindrome(num);
    return 0;
}
void isStringPalindrome(char *str){
    int low=0,high=getLength(str)-1;
    while(low<high){
        if(str[low++]!=str[high--]){
            return 0;
        }
    }
    return 1;
}
/*
*/
