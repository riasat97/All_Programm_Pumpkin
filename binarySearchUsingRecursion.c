    /*
  C program on binary search using recursion
 */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int bs(int *arr,int low,int high,int no){
    if(low<=high){
        int mid=low+(high-low)/2;
        if(no == arr[mid])return mid;
        if(no>arr[mid]) return bs(arr,mid+1,high,no);
        return bs(arr,low,mid-1,no);
    }
    return -1;
}
int main()
{
    int arr[5]={2, 3, 4, 10, 40};//sorted array
    int size= sizeof(arr)/sizeof(arr[0]);
    int x=40;
    int result = bs(arr, 0, size-1, x);
    (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d",
                                                   result);
    return 0;
}
/*
*/
