/*
 * Bubble sort code
 */
#include <stdio.h>
#include <stdlib.h>
void swapByReference(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int *num,int size){

    for(int i=0;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(num[j]>num[j+1]){
               swapByReference(&num[j],&num[j+1]) ;
            }
        }
    }

}
void printArray(int *num,int size){
    for(int i=0;i<size;i++){
        printf("%4d",num[i]);
    }
}
int main()
{
    int num[6]={10, 7, 8, 9, 1, 5};
    int size=sizeof(num)/sizeof(num[0]);
    printf("\nBefore sort :\n");
    printArray(num,size);
    bubbleSort(num,size-1);
    printf("\nAfter sort :\n");
    printArray(num,size);

    return 0;
}
/*
*/
