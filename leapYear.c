    /*
 * C program to check whether a year is leap year or not
 *
 */
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int year;
    printf("enter a year to check leap year \n");
    scanf("%d",&year);

    if(year%4==0){
        if(year%100==0){
            if(year%400==0) printf("%d is leap year",year);//2000
            else printf("%d is Not a leap year",year);//1900
        }else
        printf("%d is a leap year",year);//2004

    }
    else
    printf("%d is Not a leap year",year);//1983
}
/*


*/
