//Write the program to print the following outputs using for loops.
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<limits.h>

int main(){
    FILE *file;
    FILE *fileout;
	file=fopen("D:\\installed\\CodeBlocks\\Apt_Series\\read.txt","r");
 	fileout=fopen("D:\\installed\\CodeBlocks\\Apt_Series\\write.txt","w");
	int n,sum=0;
	while(1==fscanf(file,"%d",&n)){
        sum+=n;
	}

	fprintf(fileout,"%d",sum);
	fclose(file);
	fclose(fileout);
	return 0;
}

