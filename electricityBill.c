//An electricity board charges the following rates for the use of electricity:
//For the first 200 units: .80 per unit
//For the next 100 units:  .90per unit
//Beyond 300 units: Rs.1.00 per unit
//All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than
//Rs.400, then an additional surcharge of 15% of total amount is charged. Write a program to read
//the names of users and number of units consumed and print out the charges with names.

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>


int main(){

    char name[15];
    float unit,total;
    int defautCharge=100,max=400;
    puts("username :");
    gets(name);
    puts("Units consumed :");
    scanf("%f",&unit);

    if(unit<=200)
        total=defautCharge+(unit*.80);
    else if(unit<=300)
        total=defautCharge+(unit*.90);
    else total=defautCharge+(unit*1.0);

    if(total>max){
        total=total+total*0.15;
    }
    printf("name\tunit consumed\tcharge \n");
    printf("%s\t%.2f\t\t%.2f",name,unit,total);
}



