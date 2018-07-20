/*
 * Program to Swap Variable's Numeric Values
 *
 */
#include <stdio.h>
#include <stdlib.h>
void swapByReference(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    //pointer a vitor x ar address ar pointer b ar vitor y ar address ache
    //akhon *a ar value change hole x ar value o change hobe karon pointer a vitor x ar address ache
    //abar x ar value change korleo *a ar value change hobe
}
void swapUsingTemp(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swap X=%d Y=%d",a,b);
}
void swapNotUsingTempVariable(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap X=%d Y=%d",a,b);
}
void swapNotUsingThirdVariable(int a,int b){
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swap X=%d Y=%d",a,b);
}
void swapNotUsingBitWiseOperator(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swap X=%d Y=%d",a,b);
}
int main()
{
    int x=10,y=15;
     printf("Before swap X=%d Y=%d",x,y);
     //swapUsingTemp(x,y);
     //swapNotUsingTempVariable(x,y);
     swapByReference(&x,&y);
     printf("After swap X=%d Y=%d",x,y);
    return 0;
}
/*


*/
