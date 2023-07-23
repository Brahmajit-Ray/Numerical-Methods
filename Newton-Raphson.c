#include<stdio.h>
#include<math.h>

double absol(double x){
    if(x<0){
        return (-x);
    }else{
        return x;
    }
}

double f(double x,double c){
    return x*tan(x)-c;
}

double diff(double x){
    return tan(x)+x/(cos(x)*cos(x));
}

double raphson(double x,double c){
    double h=f(x,c)/diff(x);
    while(absol(h)>0.00001){
        h=f(x,c)/diff(x);
        x=x-h;
    }
    return x;
}

int main(){
printf("%lf\n",raphson(1,5));
printf("%lf\n",raphson(3.14,3));
printf("%lf",raphson(6.28,3));
return 0;
}
