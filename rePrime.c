//C program to print all prime numbers between 1 to N using for loop
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>

int isPrime(int num){
    if(i==0||i==1)return 0;
    for(int j=2;j<=(int)sqrt(num);j++){
            if(num%j==0)
            return 0;
    }
    return 1;
}
int isPrimeUsingRecursion(int num,int i){
    if(i==1)return 1;
    if(num%i==0)return 0;
    isPrimeUsingRecursion(num,i-1);
}
int main(){
     int n1,n2;
     puts("Enter number from:\n");
     scanf("%d",&n1);
     puts("Enter number to:\n");
     scanf("%d",&n2);
     printf("Prime no. series....\n");
     for(int i=n1;i<=n2;i++){
         if(i==0||i==1)continue;
        if(isPrimeUsingRecursion(i,(int)sqrt(i))){
            printf("%4d",i);
        }
     }

}



