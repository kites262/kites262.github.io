#include <stdio.h>

#define MAXCOUNT 1000
double a[1001];

void logistic(double r, double x1, double* targetArray, int count){
    targetArray[1] = x1;
    for(int i = 2; i < count+1; i++){
        targetArray[i] = r*targetArray[i-1]*(1.0-targetArray[i-1]);
    }
}

int main(){
    double a[MAXCOUNT+1];
    int count = MAXCOUNT;

    double x1, r;
    scanf("%lf %lf", &x1, &r);

    logistic(r, x1, a, MAXCOUNT);

    int flag = 0;
    double xn = a[1000];

    for(int i = 2; i < MAXCOUNT+1; i++){
        double d = a[i]-a[i-1];
        if(d < 0.00001 && d > -0.00001){
            flag = 1;
            xn = a[i];
            break;
        }
    }

    printf("%.4f %d", xn, flag);
}