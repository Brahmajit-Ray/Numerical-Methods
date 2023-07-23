#include <stdio.h>
double f(double x,double y){
    return x*x+y;
}

int main(){
    double h,x,y,tar,yk;
    printf("Enter base case\n");
    scanf("%lf %lf",&x,&y);
    scanf("%lf %lf",&h,&tar);
    int n=(tar-x)/h;

    int i;
    for(i=0;i<n;i++){
        yk=y+h*f(x,y);
        y=y+((f(x,y)+f(x+h,yk))*(h/2));  
        x=x+h;
    }
    printf("%lf",y);
    return 0;
    
}