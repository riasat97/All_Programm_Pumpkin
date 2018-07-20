//C program to insert an element in array

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>


int main(){
    int arr[30],n,e,pos;
    puts("enter no. of elements :");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    puts("enter an elements to insert:");
    scanf("%d",&e);
    puts("enter position :");
    scanf("%d",&pos);

     for(int i=n;i>=pos;i--){
      arr[i]=arr[i-1];//right shift in case of insertion
     }
     arr[pos-1]=e;

    for(int i=0;i<=n;i++)
        printf("%4d",arr[i]);

}



