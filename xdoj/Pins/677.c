#include <stdio.h>

double getPn(int index, double x){
    if(index == 0) return 1;
    if(index == 1) return x;
    return (
        (2*index-1)*x*getPn(index-1, x)
         - (index-1)*getPn(index-2, x)
    )/index;
}

int main(){
    int n;
    double x;
    scanf("%d %lf", &n, &x);

    double sum = 0;
    for(int i = 1; i < n+1; i++){
        sum += getPn(i, x);
    }

    printf("%.4f", sum);
}