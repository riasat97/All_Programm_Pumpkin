#include<stdio.h>
//sum of array of integers
int sum(int *arr,int i){
    if(i<0)return 0;
    return arr[i]+sum(arr,i-1);
}
int main(){
    int arr[100],i,n;
    printf("Sum up to :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        arr[i]=i+1;
    printf("sum of array of integers =%d",sum(arr,n-1));
}
