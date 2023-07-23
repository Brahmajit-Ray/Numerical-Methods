#include <stdio.h>
#include <stdlib.h>
double f(double x){
    return (1/(1+x*x));
}

double trapezoidal(double n,double lower,double upper){
    double ini;
    ini=(f(upper)+f(lower))/2;
    double h;
    h=(upper-lower)/n;
    int i;
    for(i=1;i<=n-1;i++){
        ini+=f(i*h);
    }
    return h*(ini);
}

double simpson(double n,double lower,double upper){
    double ini;
    ini=f(lower)+f(upper);
    double h=(upper-lower)/n;
    int i;
    for(i=1;i<=n-1;i++){
        if(i%2==0){
            ini+=2*(f(lower+i*h));
        }else{
            ini+=4*(f(lower+i*h));
        }
    }
    return ini*(h/3);
}


int main(int argc,char *argv[])
{
    printf("%lf\n",trapezoidal(atoi(argv[1]),atoi(argv[2]),atoi(argv[3])));
    printf("%lf",simpson(atoi(argv[1]),atoi(argv[2]),atoi(argv[3])));
    return 0;
}
