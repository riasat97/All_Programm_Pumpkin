#include <stdio.h>

int getMax(int a,int b){
   if(a>=b)
    return a;
   else
    return b;
}
int main(){
int a,b,c,max;
scanf("%d%d%d",&a,&b,&c);
max=getMax(a,b);
max=getMax(c,max);
printf("largest number among %d,%d,%d is %d",a,b,c,max);
return 0;
}
