//C program to find second largest element in array without sorting
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include <limits.h>
int main(){
    int arr[30],n,first,second;
    puts("enter no. of elements :");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    first=second=INT_MIN;// Initialize them to the smallest possible integer.
    // This avoids having to special case the first elements.

    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
            second=arr[i];
    }
    if(second!=0)
    printf("1st and 2nd largest values are :%d %d",first,second);
    else printf("there is no second largest value");

}




