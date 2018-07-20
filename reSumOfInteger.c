#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   puts("Enter positive integer to sum from 1 to n :");
   scanf("%d",&n);
   printf("Sum of 1 to %d : %d",n,sumOfIntegerUsingRecursion(n));
return 0;
}

int sumOfIntegerUsingRecursion(int n){
    if(!n)return 0;
    return n+sumOfIntegerUsingRecursion(n-1);
}

