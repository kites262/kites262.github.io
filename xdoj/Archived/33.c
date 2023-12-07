#include <stdio.h>

double function(int n){
    double last = 1;
    double next = 1;

    for(int i = 2; i <= n; i++){
        next = 1.0/(1.0+last);
        last = next;
    }

    return next;
}

int main(){
    double n;
    scanf("%lf", &n);

    double v;
    v = function(n);

    printf("%f", v);
}