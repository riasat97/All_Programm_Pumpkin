/*
 * C program to accept a matrix of order MxN and find its transpose
 */

#include <stdio.h>
#include <stdlib.h>

 void printMatrix(int m,int n,int arr[m][n]){
     int i,j;
     printf("Given matrix :\n");
     for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
 }
 void transposeMatrix(int m,int n,int arr[m][n]){
     int i,j;
     printf("Transpose of matrix :\n");
     for( j=0;j<n;j++){
        for( i=0;i<m;i++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
 }
int main()
{
    int m,n,i,j;
    printf("enter the order of matrix\n");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter the co efficients of the matrix :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%6d",&arr[i][j]);
        }
    }
   printMatrix(m,n,arr);
   transposeMatrix(m,n,arr);

    return 0;
}
/*
suppose a given matrix : 2*3 i.e arr[2][3]={{1,2,3},{4,5,6}}
transpose of that matrix will be : 3*2 i.e arr[3][2]={{1,4},{2,5},{3,6}}

when transpose ,print loop from for each column to for each row i.e every
column will become row now.SO print 00,10,01,11,02,12

*/
