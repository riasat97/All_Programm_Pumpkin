#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,x;
    printf("Enter no. of elements :");
    scanf("%d",&n);
    char str[n][10],temp[10];
    printf("Enter %d items \n",n);
    for(i=0;i<n;i++)
        scanf("%s[^\n]",str[i]);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(str[j],str[j+1])>0){
               strcpy(temp,str[j]);
               strcpy(str[j],str[j+1]);
               strcpy(str[j+1],temp);
            }
        }
    }
    printf("----------------\n");
    for(i=0;i<n;i++)
        printf("%s\n",str[i]);
    return 0;
}
