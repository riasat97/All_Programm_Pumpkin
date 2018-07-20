//Write the program to print the following outputs using for loops.
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<limits.h>

int main(){
    freopen("D:\\installed\\CodeBlocks\\Apt_Series\\read.txt","rt",stdin);
    freopen("D:\\installed\\CodeBlocks\\Apt_Series\\write.txt","wt",stdout);
    int sum=0,n;
    while(1==scanf("%d",&n)){
        sum+=n;
    }
    printf("sum :%d",sum);
}

