//Write the program to print the following outputs using for loops.
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<limits.h>

int main(){
   int i,j,sp,n=5,k=1;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
                if(j%2==0)
            printf("%d",0);
            else printf("%d",1);
        }
        printf("\n");
    }

}

