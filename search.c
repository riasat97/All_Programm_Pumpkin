#include <stdio.h>
#include <stdlib.h>
int bs(int *arr,int low,int high,int key){
    int mid;
    if(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key)return mid;
        if(key>arr[mid])return bs(arr,mid+1,high,key);
        return bs(arr,low,mid-1,key);

    }
    return -1;
}

linearSearch(int *arr,int size,int key){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=5;
   // int res=linearSearch(arr,size,key);
    int res=bs(arr,0,size-1,key);
    if(res>=0)printf("item %d found at position %d",key,res+1);
    else printf("Item %d not found!",key);
    return 0;
}
