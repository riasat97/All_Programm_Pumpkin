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
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}
void selectionSort(int *arr,int size){
    int i,j,min;
    for(i=0;i<size-1;i++){
        min=i;
        for(j=i+1;j<size;j++){
            if(arr[min]>arr[j])
                min=j;
        }
        swap(&arr[i],&arr[min]);
    }
}
void insertionSort(int *arr,int size){
    int i,j,next;
    for(i=1;i<size;i++){
        next=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>next){
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
    selectionSort(arr,size);
    printArr(arr,size);
    return 0;
}
