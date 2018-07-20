//Write a program which will take your first and last name as input,
// copy them to a variable,
//concat to full name,
//compare them
//built in funcation
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
int getLength(char *str){
    int i=0,count=0;
    while(str[i]!='\0'){
    count++;
    i++;
    }
    return count;
}
strConCat(char *str1,char *str2){
 int len1=getLength(str1);
 int len2=getLength(str2);
 int i,j;
 for( i=len1,j=0;j<len2;j++){
    str1[i++]=str2[j];
 }
 str1[i]='\0';
 printf("concated :%s\n",str1);
}
strCopy(char *copy,char *str1){
    int i;
    for(i=0;i<getLength(str1);i++){
        copy[i]=str1[i];
    }
    copy[i]='\0';
    printf("copied :%s\n",copy);
}
int strCompare(char *str1,char *str2){
    int i=0;
    while(str1[i]==str2[i] && str1[i]!='\0')
     i++;
     if(str1[i]=='\0'&& str2[i]=='\0')return 0;
     if(str1[i] > str2[i] )return str1[i]-str2[i];
     if(str1[i] < str2[i] )return str1[i]-str2[i];
}
int main(){
    char str1[50],str2[50],copy1[50],copy2[50];
    puts("write your first name :");
    gets(str1);
    puts("write your last name :");
    gets(str2);
    strCopy(copy1,str1);
    strCopy(copy2,str2);
    strConCat(str1,str2);
    int match=strCompare(copy1,copy2);
    //printf("%d",match);
    //return;
    (match==0)?printf("%s and %s :matched",copy1,copy2):printf("%s and %s :not matched",copy1,copy2);

}

