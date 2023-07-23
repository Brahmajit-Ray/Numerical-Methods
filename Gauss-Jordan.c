#include <stdio.h>

int main(){
    int n,i,j,k;
    
    scanf("%d",&n);
    int arr[n][n+1];
    double ratio,sol[n];
    for(i=0;i<n;i++){
        for(j=0;j<n+1;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(i=0;i<n+1;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                ratio=arr[j][i]/arr[i][i];
                for(k=0;k<n+1;k++){
                    arr[j][k]=arr[j][k]-ratio*arr[i][k];
                }
            }
        }
    }
    for(i=0;i<n;i++){
        sol[i]=arr[i][n]/arr[i][i];
        printf("%lf ",sol[i]);
    }

    return 0;
}
