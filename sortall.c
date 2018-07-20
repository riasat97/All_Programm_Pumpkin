#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
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
void bubbleSort(int *arr,int size){
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}
void insertionSort(int *arr,int size){
    int i,j,nxt;
    for(i=1;i<size;i++){
        nxt=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>nxt){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=nxt;
    }
}
int main(){
    int arr[]={2,4,1,3,5},i;
    int size=sizeof(arr)/sizeof(arr[0]);
    //selectionSort(arr,size);
    //bubbleSort(arr,size);
    insertionSort(arr,size);
    for(i=0;i<size;i++){
        printf("%2d",arr[i]);
    }
}
