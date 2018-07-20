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

                for( x=0;x<strlen(str[j]);x++)
                    temp[x]=str[j][x];
                temp[x]='\0';
                for( x=0;x<strlen(str[j+1]);x++)
                    str[j][x]=str[j+1][x];
                str[j][x]='\0';
                for( x=0;x<strlen(temp);x++)
                    str[j+1][x]=temp[x];
                str[j+1][x]='\0';
            }
        }
    }
    printf("----------------");
    for(i=0;i<n;i++)
        printf("%s\n",str[i]);
    return 0;
}
