//C program to delete duplicate elements from an array

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
noOfUniqueElements(int *arr,int size){
    int count=1;
    for(int i=0;i<size-1;i++){
        if(arr[i]!=arr[i+1])
        count++;
    }
    return count;
}
int main(){
    int arr[30],n,first,second;
    puts("enter no. of elements :");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    rmDuplicatedIfSorted(arr,n);
    return 0;
    int unique=noOfUniqueElements(arr,n);
    int uniqueArr[unique],i=0,j=0;
    for( i=0;i<n-1;i++){
      if(arr[i]!=arr[i+1]){
          uniqueArr[j++]=arr[i];
      }
    }
    uniqueArr[j]=arr[i];//sesh ar ta unique sorted array te
        for(int i=0;i<unique;i++)
            printf("%4d",uniqueArr[i]);
}

void rmDuplicatedIfSorted(int *arr,int size){
    int uniqueArr[size],k=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=arr[i+1])
         uniqueArr[k++]=arr[i];
    }
    for(int i=0;i<k;i++)
       printf("%2d",uniqueArr[i]);

}

