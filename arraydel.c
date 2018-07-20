//C program to delete an element in array
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>

int delFromPosition(int *arr,int pos,int size){
    if(pos==size+1 || pos<1)return 0;
    for(int i=pos-1;i<size;i++){//extra index a garbage
        arr[i]=arr[i+1];
    }
    return size-1;//return new size to avoid garbage
}
int delFromValue(int *arr,int val,int size){
     for(int i=0;i<size;i++){
        if(arr[i]==val){
            for(int j=i;j<size;j++){
                arr[j]=arr[j+1];
            }
            size--;
            i--;
        }
    }
    return size;
}
int main(){
    int arr[30],n,e,pos,count=0;
    puts("enter no. of elements :");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    puts("enter an element/position to delete:");
    scanf("%d",&e);
//    puts("enter position :");
//    scanf("%d",&pos);
    int size=delFromPosition(arr,e,n);

    if(!size) printf("Invalid position! Please enter position between 1 to %d", n);
    for(int i=0;i<size;i++)
        printf("%4d",arr[i]);

}



