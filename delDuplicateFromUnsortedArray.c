//C program to delete duplicate elements from an unsorted  array

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>

int main(){
    int arr[30],n,i,j,k;
    puts("enter no. of elements :");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for( i=0;i<n;i++){
       for( j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }

        for(int i=0;i<n;i++)
            printf("%4d",arr[i]);
}



