// C program to accept an amount and count number of notes
#include<stdio.h>
#include<string.h>
#include<conio.h>
void pumpimplementation(int *notes,int *noteCounter,int number,int size){
    for(int i=0;i<size;i++){
        if(number>=notes[i]){
            noteCounter[i]=number/notes[i];
            number=number-(notes[i]*noteCounter[i]);
        }
    }

}
void tkLagbeKoita(int *notes,int *counter,int taka,int size){
    for(int i=0;i<size;i++){
            if(taka==0)break;
        if(taka>=notes[i]){
             counter[i]=taka/notes[i];
             taka=taka%notes[i];
        }
    }
}
int main(){
    int taka;
    int arr[9]={1000,500,100,50,20,10,5,2,1};
    int count[9]={0};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter an positive amount in BDT\n");
    scanf("%d",&taka);
    tkLagbeKoita(arr,count,taka,size);
//    for(int i=0;i<size;){
//        if(taka>=arr[i]){
//            count[i]++;
//            taka=taka-arr[i];
//        }
//        if(taka<arr[i])i++;
//    }
    for(int i=0;i<size;i++){
        if(count[i]!=0)
        printf("%4d tk %4d \n",arr[i],count[i]);
    }
}

