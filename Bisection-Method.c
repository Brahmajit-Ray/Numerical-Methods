#include <stdio.h>
double abs_(double x){
    if (x<0){
        return -x;
    }else{
        return x;
    }
}

double f(double x){
	return -x*x*x+3;
}


double diff(double x){
	return 3*x*x - 2*x;
}

double bisection(double lower,double upper){
    if(f(lower)>0){
        double swap;
        swap=lower;
        lower=upper;
        upper=swap;
    }
    while(abs_(upper-lower)>0.00001){
        double mid;
        mid=(upper+lower)/2;
        if(f(mid)==0){
            return mid;
        }else{
            if(f(mid)>0){
                upper=mid;
            }else{
                lower=mid;
            }
        }
    }    
    return lower;
}

int main()
{
    printf("%lf",bisection(0,2));

    return 0;
}