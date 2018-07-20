//C program to calculate power of number using loop
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>

int reFact(int n){
    if(n==1 || n==0)return 1;
    return n*reFact(n-1);
}
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int factPump(int n){
    static int f=1;
    if(n==1)return f;
    f*=n;
    factPump(n-1);
}
int npr(int n,int r) {
   return reFact(n)/reFact(n-r);
}
int main(){
    int n,r,res;
    puts("Enter n and r:");
    scanf("%d%d",&n,&r);
    printf("%d\n\n",factPump(6));
    printf("%dp%d = %d \n",n,r,npr(n,r));
}



