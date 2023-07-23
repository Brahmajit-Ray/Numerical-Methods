#include <stdio.h>

double absol(double x){
    if(x<0){
        return -x;
    }else{
        return x;
    }
} 

double f(double x){
    return x*x-5;
}

double regula(double upper,double lower){
    while(absol(upper-lower)>0.001){
        double c;
        c=(lower*f(upper)-upper*f(lower))/(f(upper)-f(lower));
        if(f(c)==0){
            return c;
        }else{
            if(f(c)>0){
                upper=c;
            }else{
                lower=c;
            }
        }
        
    }
    return upper;
    
}


int main()
{
    
    printf("%lf",regula(2,3));

    return 0;
}