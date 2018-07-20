#include <stdio.h>
#include <stdlib.h>

void reverseSentence();

int main()
{
    char r;
printf("Enter a sentence: ");
reverseSentence();

return 0;
}

void reverseSentence()
{
char c;
scanf("%c", &c);
printf("%c",c);
if( c != '\n')
{
reverseSentence();
printf("%c",c);
}
}
