#include<stdio.h>

int main(){
      int a=4,*p;
      p=&a;
      printf("a:%d \t p:%d \n",a,*p);//p address ar a ar address same

     *p=5;
     printf("a:%d \t p:%d \n",a,*p);// same address a value change korle oi address jar jar ache value tar tar value change hobe

     a=6;
     printf("a:%d \t p:%d",a,*p);
    return 0;

}
