//matrix
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#define N 2
void transposeMat(){
    int arr[3][3];
    puts("Enter values for 3*3 matrix :");
    for(int i=0;i<3;i++){
         for(int j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("\nGiven Matrix :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d",arr[i][j]);
        printf("\n");
    }
    printf("\n transpose of given matrix :\n");
    for(int j=0;j<3;j++){
         for(int i=0;i<3;i++)
            printf("%d",arr[i][j]);
    printf("\n");
    }

    /*in transpose row will become column and vise versa
      so now previous column will be new row
      00,10,20
      01,11,21
      02,12,22
      //prev matrix ar column k row hisebe print
    */
}
void  addTwoMat(){
    int arr1[2][2],arr2[2][2],sum[2][2];
    printf("Enter 2*2 Matrix 1 :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            scanf("%d",&arr1[i][j]);
    }
    showMatrix(2,2,arr1);
    printf("Enter 2*2 Matrix 2 :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            scanf("%d",&arr2[i][j]);
    }
    showMatrix(2,2,arr2);
    printf("Sum of Two Matrix :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%4d",sum[i][j]);
        }
        printf("\n");
    }
}
void multiTwoMat(){
 //Two matrices can be multiplied only and only if number of columns in the first matrix is same as number of rows in second matrix.
 //https://www.onlinemathlearning.com/matrix-multiplication.html
 //https://www.geeksforgeeks.org/c-program-multiply-two-matrices/
 int arr1[N][N],arr2[N][N],res[N][N];//arr1[m][n],arr2[n][p],res[m][p]
 printf("Enter %d*%d Matrix 1 :\n",N,N);
 readMatrix(N,N,arr1);
 showMatrix(N,N,arr1);
 printf("Enter %d*%d Matrix 1 :\n",N,N);
 readMatrix(N,N,arr2);
 showMatrix(N,N,arr2);
 for(int i=0;i<N;i++){ // loop till no of rows in matrix 1 m
    for(int j=0;j<N;j++){ // loop till no of column in matrix 2 p
            res[i][j]=0;
        for(int k=0;k<N;k++){ // loop till no of column in matrix 1 n
            res[i][j]+= arr1[i][k]*arr2[k][j];
        }
    }
 }
 printf("\nAfter Multiplication of m*n * n*p = m*p:\n");
 showMatrix(N,N,res);
}
int main(){
    //transposeMat();
    //addTwoMat();
    multiTwoMat();
    return 0;
}
void showMatrix(int r,int c,int arr[][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%4d",arr[i][j]);
        printf("\n");
    }
   printf("\n");
}
void readMatrix(int r,int c,int arr[][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    }
}
