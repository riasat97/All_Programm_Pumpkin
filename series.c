#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
float powOfX(float x,int n);
double factorial(double n);
void harmonicSeries(){
    //Write a program to determine and print the sum of the following
    //harmonic series for a given value of n:
    //1+1/2+1/3+………………+1/n
    int n;
    printf("harmonic series up to :\n");
    scanf("%d",&n);
    double sum=0.0;
    for(float i=1;i<=n;i++){
    sum=sum+(1/i);
  }
   printf("sum of harmonic series up to %d : %.2lf \n",n,sum);
}
//Write programs to evaluate the following functions to 0.0001% accuracy.
//Sum=1+(1/2)2+(1/3)3+(1/4)4+...+(1/n)n(0.0001)
void pump()
{
double term,deno,lob,sum;

term=1.0;
sum=1.0; lob=1.0;deno=2.0;
while(term>=0.0001)
{
term=lob/deno;
term=pow(term,deno);
printf("term :%.4lf\n",term);
sum+=term;
deno++; printf("%.2lf\n",sum);
}
printf("the sum= %.2lf\n",sum);

}

int sineRawSeries()
{
  int i, j, n, fact, sign =  - 1;
  float x, p, sum = 0;

  printf("Enter the value of x : ");
  scanf("%f", &x);
  printf("Enter the value of n : ");
  scanf("%d", &n);

  for (i = 1; i <= n; i += 2)
  {
    p = 1;
    fact = 1;
    for (j = 1; j <= i; j++)
    {
      p = p * x;
      fact = fact * j;
    }
    sign =  - 1 * sign;
    sum += sign * p / fact;
  }

  printf("sin %0.2f = %f", x, sum);

  return 0;
}
//sin x = x - x3/3! + x5/5! - x7/7! + x9/9! ........
void sineSeries(){
    float x,sum=0.0,p;
    int n,sign=-1;
    double fact;
    printf("Enter the value of x:\n");
    scanf("%f",&x);
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
         p=powOfX(x,i);
         fact=factorial((double)i);
         sign*=-1;
         sum=sum+(sign*p/fact);
    }
    printf("sum of sine(%.2f) : %.2f",x,sum);

}
//cos(x) = 1 - x2/2! + x4/4! - x6/6! + x8/8! - ...
void cosineSeries(){
    float x,sum=1.0,term;
    int n,sign=1;
    printf("\nEnter value of x: \n");
    scanf("%f",&x);
    printf("Enter value of n: \n");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2){
        sign*=-1;
        term= sign*pow((double)x,(double)i)/factorial((double)i);
        sum+=term;
    }
     printf("sum of cosine(%.2f) : %.4f",x,sum);
}
float powOfX(float x,int n){
    int p=1;
    for(int i=1;i<=n;i++)
        p*=x;
    return p;
}
double factorial(double n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
int main(){

  harmonicSeries();
  //pump();
 // sineSeries();
  //cosineSeries();
 // eulerSeries();
 // givenSeries1();
 // givenSeries2();
    //titasAeSeries();
    //titasAeSeriesAlt();
    multipleMinistrySeries();
  return 0;
}
//Write a program to compute the value of Euler’s number e, that is used as the base of natural
//logarithms. Use the following formula.
//e=1+1/1!+1/2!+1/3!+…………………………………+1/n!
//use a suitable loop construct. The loop must terminate when the difference between two
//successive values of e is less than 0.00001.
void eulerSeries(){
    int n;
    float sum=0.0,term,dif=1.0,t=1;
    printf("\nEnter number of terms :\n");
    scanf("%d",&n);
    for(int i=1;dif>=0.00001;i++){
        term=1/factorial((double)i);
        sum+=term;
        dif=t-term;
        printf("%.2f\n",dif);
        if(dif>=0.00001)t=term;
    }
    printf("the value of euler's number :%.2f",sum);
}

//Find Sum of Series [ 1-X^2/2!+X^4/4!- .........] using For loop
void givenSeries1(){
    int n,sign=1;
    float x,term,sum=1.0;
    printf("\nEnter value of x:\n");
    scanf("%f",&x);
    printf("\nEnter value of n: \n");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2){
         sign*=-1;
         term= sign*pow((double)x,(double)i)/factorial((double)i);
         sum+=term;
    }
     printf("\nsum of cosine(%.2f) : %.4f\n",x,sum);
}
//Find Sum of Series [ 1+X+X^2/2!+X^3/3!+....] using for loop
void givenSeries2(){
    float sum=1.0,term,x;
    int n;
    printf("\nEnter x: \n");
    scanf("%f",&x);
    printf("\nEnter n: \n");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        term=pow((double)x,(double)i)/factorial((double)i);
        sum+=term;
    }
    printf("\nsum of given series till %d : %.4f\n",n,sum);
}
//find sum of series [1+(3*5)+(7*9*11)+..+n]
void titasAeSeries(){
    int n=3,i,j,k=1,sum=0,term;
    for(i=1;i<=n;i++){
        for(j=1,term=1;j<=i;j++){
            term*=((2*k++)-1);
            //k+=2;
        }
         sum+=term;
    }
    printf("\nsum of given series till %d : %d\n",n,sum);
}
void titasAeSeriesAlt(){
    int n=3,i,j,k=1,sum=0,term;
    for(i=1;i<=n;i++){
        for(j=1,term=1;j<=i;j++,k+=2){
            term*=k;
        }
         sum+=term;
    }
    printf("\nsum of given series till %d : %d\n",n,sum);
}
//1+(1+2)+(1+2+3)+...+(1+2+3+..+n)
void multipleMinistrySeries(){
    int n=10,sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum+=j;
        }
    }
     printf("\nsum of given series till %d : %d\n",n,sum);
}
