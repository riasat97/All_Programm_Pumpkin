/*
  C program on Iterative implementation of Binary Search
 */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int bs(int *arr,int low,int high,int no){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(no == arr[mid])return mid;
        if(no>arr[mid]) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main()
{
    int arr[5]={2, 3, 4, 10, 40};//sorted array
    int size= sizeof(arr)/sizeof(arr[0]);
    int x=10;
    int result = bs(arr, 0, size-1, x);
    (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d",
                                                   result);
    return 0;
}
/*
Given a sorted array arr[] of n elements, write a function to search a given element x in arr[].

A simple approach is to do linear search.The time complexity of above algorithm is O(n).
Another approach to perform the same task is using Binary Search.

The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n).

We basically ignore half of the elements just after one comparison.

Compare x with the middle element.
If x matches with middle element, we return the mid index.
Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
Else (x is smaller) recur for the left half.

Auxiliary Space: O(1) in case of iterative implementation. In case of recursive implementation, O(Logn) recursion call stack space.
*/
