// C program to find gcd of two numbers using for loop
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
    int n1,n2;
    printf("Enter 2 numbers :\n");
    scanf("%d%d",&n1,&n2);
//    int gcd=1;
//    int min=(n1<n2)?n1:n2;
//    for(int i=1;i<=min;i++){
//        if(n1%i==0 && n2%i==0)
//            gcd=i;
//    }
    printf("lcm of %d and %d is : %d\n",n1,n2,lcm(n1,n2));
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}

int gcd(int a,int b){
    if(a==0||b==0)
        return 0;
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);
}
int gcdUsingWhile(int a,int b){
    if(a==0||b==0)
        return 0;
    if(a==b)
        return a;
    while(a!=b){
        if(a>b)
         a-=b;
        else b-=a;
    }
    return a;
}
