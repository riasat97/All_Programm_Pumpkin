//C program to calculate power of number using loop
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>

int rePow(int b,int e){
    static int res=1;
    if(e==0)return res;
    res*=b;
    rePow(b,e-1);
}
rePower(int b,int e){
    if(e==0)return 1;
    return b*rePower(b,e-1);
}
int main(){
    int base,exponent,res=1;
    puts("Enter base and exponent:\n");
    scanf("%d%d",&base,&exponent);
//    res=base;
//    for(int i=1;i<exponent;i++){
//        res*=base;
//    }
    printf("%d^%d :%d",base,exponent,rePower(base,exponent));
}



