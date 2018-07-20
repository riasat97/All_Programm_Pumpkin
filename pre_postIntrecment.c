/*
*C Program to Find Length of the String using Pointer
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void main()
{
int a = 4 , x ;

int b = 5 , y ;

x = a++ + ++a + a++;

y = ++b + ++b + ++b;

printf ( " %d\n ", x );
printf ( " %d ", y );

 x = 3;
 a = x++ + x++;
printf("%d",a);
printf("%d",x);

int c=10;

printf("%d\n%d\n%d",c,c++,++c);
}
/*


a++ + ++a + a++
it first calculates ++a + a then does ++ once

think of it like
a = 5 + 4
a=9++
10
then it calculates a + 10 then does ++ once
a = 5 +10
a = 15++
16


++b + ++b + ++b
it first does ++b twice, then b + b
b = ++ ++5
b = ++6
b = 7
b = 7 + 7
14
then it does ++b once ,then b+ 14
b=++7
b=8
b=8+14
22

That incremental expression is undefined. So, the result varies from compiler to compiler. I used code blocks IDE here.

In C, the precedence of unary operator ++ is from right to left.
First evaluate the section a++ + ++a and calculate the value 5+5=10. Then perform the rest in the right portion i.e. the current value of a++ is added with the intermediate result i.e. 10+5= 15= x.

If you don't catch the value of x, then go for the following procedure in case of variable b more precisely.

b=5;
y=++b + ++b+ ++b ;

there are few steps here

(i) right most ++b will get incremented to 6
(2) and now 6 will be placed at memory location of b
(3) now for ++b , b become 7 ,and now 7 will be placed at memory location of b
(4) + is a binary operator, so it needs two value
(5) it will fetch the value of b which is 7
(6) now 7+7=14
(7) ++ has higher precedence
(8) now ++b + 14 is to be calculated
(9) b will be 7+1=8
(10) 8+14=22 = y
*/
