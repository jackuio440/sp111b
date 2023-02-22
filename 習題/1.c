#include<stdio.h>

double inter(double (*f)(double), double a,double b )
{
    double step=0.001,sum=0.0;
    for(double x=a;x<b;x+=step)
    {
        sum+=f(x)*step;
    }
    return sum;

}
double square(double x)
{
    return x*x;
}
int main()
{
    printf("%f",inter(square,0.0,2.0));
}
