//C program to reverse an array by swapping elements
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>

int main(){
    int arr[30],n,e,pos,temp=0;
    puts("enter no. of elements :");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int low=0;
    int high=n-1;
    while(low<high){
       temp=arr[low];
       arr[low]=arr[high];
       arr[high]=temp;
       low++;
       high--;
    }

    for(int i=0;i<n;i++)
        printf("%4d",arr[i]);

}



