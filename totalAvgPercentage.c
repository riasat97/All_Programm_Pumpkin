//C program to find total, average and percentage marks of subjects
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
    int subject;
    float marks,total=0.0,avg,percent;

    printf("Enter no. of subjects:\n");
    scanf("%d",&subject);
    printf("Enter Marks for %d subjects :\n",subject);

    for(int i=0;i<subject;i++){
        printf("Subject %d :",i+1);
        scanf("%f",&marks);
        total+=marks;
    }
    avg=total/subject;
    percent=(total*100)/(subject*100);
    printf("total:%.2f\n",total);
    printf("average:%.2f\n",avg);
    printf("percentage:%.2f %%\n",percent);
}

