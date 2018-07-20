/*
 * Program to Reverse a number
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rev=0,n,rem;
    int i,j;
    printf("enter a number to reverse :\n");
    scanf("%d",&num);//121
    n=num;
    while(n){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("Reverse of %d is %d",num,rev);
    return 0;
}
/*


*/
