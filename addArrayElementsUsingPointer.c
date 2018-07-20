/*
*C Program to Compute sum of the array elements using pointers !
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void  addArrayElementsUsingPointer(int *ptr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*ptr;
        ptr++;
    }
    printf("sum of the array elements using pointer :%d\n",sum);
}
void main()
{
    int arr[5],n,*ptr,sum=0;
    puts("No. of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ptr=arr;// ptr=&arr[0]
    //printf("%d\n",*ptr);
    addArrayElementsUsingPointer(ptr,n);

}

