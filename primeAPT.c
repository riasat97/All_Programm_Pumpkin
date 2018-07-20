#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
//Write a c program to show prime number starting from 19 to 10 consecutive number without using built-in function.

int isPrime(int num){

    int size=sqrt((double)num);
    for(int i=2;i<=size;i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("enter no of consecutive primes starting from 19 :\n");
    scanf("%d",&n);
    for(int i=19,c=1;c<=n;i++){
        if(isPrime(i)){
            printf("%2d. %2d\n",c,i);
            c++;
        }
        if(c>n)break;
    }
}
/*
#include <stdio.h>
int main()
{
int c=0,i,j;
for(i=19;i<=10000;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
break;
}
if(i==j)
{
printf("%d\n",i);
c=c+1;
if(c==10)
break;
}
}
return 0;
}
*/
