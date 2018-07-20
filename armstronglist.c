//Write the program to print the following outputs using for loops.
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
int isArmStrong(int num){
    int n=num,c=0,sum=0,rem;
    while(n){
        c++;
        n/=10;
    }
    n=num;
    while(n){
        rem=n%10;
        sum=sum+power(rem,c);
        n/=10;
    }
    return (sum==num)?1:0;
}
int main(){
    int i;
    for(i=0;i<=1000;i++){
        if(isArmStrong(i)){
            printf("%d \n",i);
        }
    }
}

int power(int x,int r){
    if(r==0)return 1;
    return x*power(x,r-1);
}
//http://mathworld.wolfram.com/NarcissisticNumber.html
