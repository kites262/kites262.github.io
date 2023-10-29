#include <stdio.h>
#include <math.h>

#define ESP 1e-5

double getNext(double last, double target){
    return 0.5*(last + target/last);
}


int main(){
    double target;
    scanf("%lf", &target);

    double x1;
    double x2 = 1.0;

    int hasNext = 1;
    while(hasNext){
        x1 = x2;
        x2 = getNext(x1, target);
        if(fabs(x1 - x2) <= ESP) hasNext = 0;
    }

    printf("%.5f", x2);
}