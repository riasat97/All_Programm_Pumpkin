//multiplication table
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#define N 2

int main(){
    int n,arr[20][20];
    printf("Enter number to print table :\n");
    scanf("%d",&n);
//    for(int i=1;i<=10;i++){
//        printf("%d * %d = %4d\n",n,i,n*i);
//    }
    for(int i=1;i<=10;i++){ // for 1 to 10 multiplier
        for(int j=1;j<=10;j++){ // multiply up to range here 10
            arr[i][j]=i*j;
        }
    }
    for(int i=1;i<=10;i++)
        printf("%d * %d = %d \n",i,n,arr[n][i]);
}
