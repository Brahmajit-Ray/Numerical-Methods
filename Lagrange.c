#include <stdio.h>
struct Data{
    double x,y;
}

double Lagrange(Data f[],int xi,int n){
    double factor,ans=0;
    int i;
    for(i=0;i<n;i++){
        factor=f[i].y;
        for(j=0;j<n;j++){
            if(j!=i){
                factor=factor*(xi-f[j].x)/double(f[i].x-f[j].x);
            }
        }
        ans+=factor;
    }
        return ans
}

int main(){
    Data
        
    }