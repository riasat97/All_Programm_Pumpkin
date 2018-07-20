/*
 * Program fibonacci series up to n term
 * Program fibonacci series with in 100
 */
#include <stdio.h>
#include <stdlib.h>

void fiboWithInRange(range){ //with in Range value
    int a=0,b=1,sum=1;

    while(sum<=range){
    printf("%4d",sum);
    a=b;
    b=sum;
    sum=a+b;
    }
}
void fibo(range){ //up to n term
    int a=0,b=1,sum=1;

    while(range){
    printf("%4d",sum);
    a=b;
    b=sum;
    sum=a+b;
    range--;
    }
}
void fiboRev(int n){//no. of elements
    static int a=0,b=1,sum=1;
    if(n==0)return;
    printf("%4d",sum);
    a=b;
    b=sum;
    sum=a+b;
    fiboRev(n-1);

}
void fiboInRangeUsingRecoursion(int range){
    static int a=0,b=1,sum=1;
    if(sum>range)return;
    printf("%4d",sum);
    a=b;
    b=sum;
    sum=a+b;
    fiboInRangeUsingRecoursion(range);
}
int main()
{
    int range=9;
    printf("fibonacci series up to %d terms\n",range);
    printf("%4d%4d",0,1);
    fibo(range-2);
    printf("\nfibonacci series with in %d\n",range);
    printf("%4d%4d",0,1);
    fiboWithInRange(range);
    printf("\nfibonacci series up to %d terms using recursion\n",range);
    printf("%4d%4d",0,1);
    fiboRev(range-2);
    printf("\nfibonacci series with in range %d using recursion\n",range);
    printf("%4d%4d",0,1);
    fiboInRangeUsingRecoursion(range);
    return 0;
}
/*


*/
