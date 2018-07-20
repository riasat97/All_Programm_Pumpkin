//Write the program to print the following outputs using for loops.
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
int isStrong(int num){
    int n=num,sum=0,rem;
    while(n){
        rem=n%10;
        sum=sum+fact(rem);
        n/=10;
    }
    return (sum==num)?1:0;
}
int main(){
    int i;
    for(i=1;i<=1000;i++){
        if(isStrong(i)){
            printf("%d \n",i);
        }
    }
}

int fact(int x){
    if(x==0)return 1;
    return x*fact(x-1);
}
//https://codeforwin.org/2015/06/c-program-to-print-all-strong-numbers.html
