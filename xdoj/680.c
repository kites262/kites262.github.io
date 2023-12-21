#include <stdio.h>

#define STEP 0.0001

double fun(double a, double x){
    return -x*x*x + a*x*x;
}

int main(){
    double a;
    scanf("%lf", &a);

    double max = fun(a, 0);

    for(int i = 0; i*STEP <= 10; i++){
        if(fun(a, i*STEP) > max){
            max = fun(a, i*STEP);
        }
    }

    printf("%.2f", max);
}