// C program to find sum of first and last digits of a number
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
    int number,reverse=0;
    printf("enter a number :\n");
    scanf("%d",&number);
    int lastDigit=number%10;
    while(number){
        reverse=reverse*10+number%10;
        number/=10;
    }
    int firstDigit=reverse%10;
    int sum=firstDigit+lastDigit;
    printf("sum of 1st and last digit : %d\n",sum);
}

