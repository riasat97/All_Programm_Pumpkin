//different patterns
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
void binaryPat1(){
//    0
//   10
//  010
// 1010
//01010
    int n=noOfRows(),v;
    for(int i=1,v=0;i<=n;i++,v++){
        for(int sp=1;sp<=n-i;sp++)
            printf(" ");
        for(int j=1,k=v;j<=i;j++){
            (k++%2==0)?printf("0"):printf("1");
        }
        printf("\n");

    }

}
void binaryPat1At(){
    int i,j,k,v,sp,n=5;
    for(i=1,v=0;i<=n;i++){
    for(sp=1;sp<=n-i;sp++)
        printf(" ");
    for(j=1;j<=i;j++){
        (v++%2==0)?printf("0 "):printf("1 ");
    }
    printf("\n");
   }
}
void binaryPat2(){
/*C program to print following Pyramid:
    0        0
    01      01
    010    010
    0101  0101
    0101001010
*/
int n=noOfRows();
    for(int i=1,d=8;i<=n;i++,d-=2){
        for(int j=0;j<i;j++)
        (j%2==0)?printf("0"):printf("1");

    for(int space=1;space<=d;space++)
        printf(" ");

        for(int j=0;j<i;j++)
        (j%2==0)?printf("0"):printf("1");

        printf("\n");
    }
}
void binaryPat3(){
//    1
//    1 0 1
//    1 0 0 0 1
//    1 0 0 0 0 0 1
//    1 0 0 0 0 0 0 0 1
int n=noOfRows();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*i-1);j++){
            (j==1 || j==(2*i-1))?printf("1"):printf("0");
        }
        printf("\n");
    }
}
int main(){

   binaryPat1();
   binaryPat2();
   binaryPat3();
}

int noOfRows(){
    int n;
    puts("No of rows :");
    scanf("%d",&n);
    return n;
}
