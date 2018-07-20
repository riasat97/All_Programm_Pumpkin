#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int *arr,int size){
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(arr[j+1]>arr[j])
                swap(&arr[j],&arr[j+1]);
        }
    }
}
void selectionSort(int *arr,int size){
    int i,j,max;
    for(i=0;i<size-1;i++){
        max=i;
        for(j=i+1;j<size;j++){
            if(arr[j]>arr[max])
                max=j;
        }
        swap(&arr[i],&arr[max]);
    }
}
void insertionSort(int *arr,int size){//reverse order a insertion sort fastest
    int i,j,next;
    for(i=1;i<size;i++){
        next=arr[i];
        j=i-1;
        while(j>=0&&next>arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=next;
    }
}
void printArr(int *arr,int size){
    int i;
    for(i=0;i<size;i++)
        printf("%4d",arr[i]);

}
int main()
{
    int arr[]={4,5,3,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    printArr(arr,size);
    return 0;
}
//asc sort a ager ta boro hole swap()
//desc sort a porter ta boro hole swap()
