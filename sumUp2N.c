//Write a program which will take an input from user say n as input and calculates the sum up to n.
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
int main(){
    int n;
    printf("sum up to :\n");
    scanf("%d",&n);
    printf("sum up to %d : %d",n,sum(n));
}
int sumLoop(int n){
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=i;
   return sum;
}
int sum(int n){
    if(n==0)return n;
    return n+sum(n-1);
}
int sumUsingStaticRecoursion(int n){
 static int i=1,sum=0;
 if(i>n)return sum;
 sum+=i;
 i++;
 sumUsingStaticRecoursion(n);
}
