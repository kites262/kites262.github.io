#include <stdio.h>
#include <math.h>

double getAt(int index, double x){
    double a = pow(x, index*2-1.0);
    double b = 1;
    for(int i = 2; i <= index*2-1; i++){
        b *= i;
    }

    int sign = (index%2==0 ? -1 : 1);

    return sign * a/b;
}

int main(){
    int count;
    double x;
    scanf("%d %lf", &count, &x);

    double sum = 0;
    for(int i = 1; i <= count; i++){
        sum += getAt(i, x);
    }

    printf("%.4f", sum);
}