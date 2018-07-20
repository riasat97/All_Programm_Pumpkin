#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//Integer as a Sum of Two Prime Numbers
int isPrime(int n){
    if(n==0 || n==1)return 0;
    int size=sqrt((double)n);
    for(int i=2;i<=size;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int n,sum=0,flag=0;;
    printf("Enter a number :\n");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
            if(!isPrime(i))continue;
            if(isPrime(n-i)){
            printf("%4d + %4d= %4d \n",i,n-i,n);
            flag=1;
            }
        }
      if (flag == 0) printf("%d cannot be expressed as the sum of two prime numbers.", n);

    return 0;
}

