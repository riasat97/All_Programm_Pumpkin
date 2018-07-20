//C program to print all perfect numbers between 1 to N using for loop
//A perfect number is a positive number, that is equal to sum of its positive divisor.
//For Example : 6 is a perfect number as positive factors of 6 are 1, 2 and 3 whose sum is 6.
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>

int isPerfect(int num){
    int perfect=0;
    for(int j=1;j<=num/2;j++){
            if(num%j==0)
             perfect+=j;
    }
    return (perfect==num)?1:0;
}
int isPerfectUsingRecursion(int num,int i){//recommended
    if(i==0)return 0;
    if(i==1)return 1;
    if(num%i==0) return i+isPerfectUsingRecursion(num,i-1);
    return isPerfectUsingRecursion(num,i-1);
}
int rePerfect(int n,int i){
    if(i==n)return 0;
    if(n%i==0)return i+rePerfect(n,i+1);
    return rePerfect(n,i+1);
}
/*
for num=6,6/2=3;
3+isPerfectUsingRecursion(2);
3+2+isPerfectUsingRecursion(1);
3+2+1

for num=28,28/2=14
14+7+4+2+1
13/12/11/10/9/8/6/5/3

*/
int main(){
     int n1,n2;
     puts("Enter number from:\n");
     scanf("%d",&n1);
     puts("Enter number to:\n");
     scanf("%d",&n2);
     printf("perfect no. series....\n");
//     int res=rePerfect(6,1);
//     (res==6)?printf("perfect"):printf("no");
//     return ;
     for(int i=n1;i<=n2;i++){
        if(isPerfectUsingRecursion(i,i/2)==i){
            printf("%d\n",i);
        }
//        if(rePerfect(i,1)==i){
//            printf("%d\n",i);
//        }
     }

}

//6 is a perfect number
//28 is a perfect number
//496 is a perfect number
//8128 is a perfect number

