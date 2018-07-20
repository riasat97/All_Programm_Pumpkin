#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
int fibo(int *arr,int n,int sum){
    static int a=0,b=1,i=0;
    if(sum<n){
        printf("%4d",sum);
        arr[i++]=sum;
        a=b;
        b=sum;
        sum=a+b;
        fibo(arr,n,sum);
    }
    return i;
}

int  primeNoInFibArr(int *primeArr,int *fibArr,int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(isPrime(fibArr[i]))
            if(fibArr[i]!=2)
            primeArr[j++]=fibArr[i];
    }
    return j;
}
int isPrime(int n){
    if(n==1 || n==0)return 0;
    int size=(int)sqrt(n);
    for(int i=2;i<=size;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){

  int i,j,n,fibArr[100],oddArr[100],primeArr[100];
  printf("Enter Fibonacci series up to :");
  scanf("%d",&n);
  printf("%4d%4d",0,1);
  int noOfFib=fibo(fibArr,n,1);
  int noOfPrime=primeNoInFibArr(primeArr,fibArr,noOfFib+2);
  printf("\nenter range between 2 to %d : \n",n);
  scanf("%d%d",&i,&j);
  printf("Thank you..Showing Only Odd prime values :\n");
  for(int c=0;c<noOfPrime;c++){
    if(primeArr[c]>=i&&primeArr[c]<=j)
        printf("%4d",primeArr[c]);
  }
  return 0;
}



