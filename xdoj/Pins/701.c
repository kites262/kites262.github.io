#include <stdio.h>
#include <math.h>
#define MAXCOUNT 101

int main(){
    int count;
    double a[MAXCOUNT];
    scanf("%d", &count);
    for(int i = 0; i < count; i++) scanf("%lf", &a[i]);
    
    //calc average
    double average = 0;
    for(int i = 0; i < count; i++){
        average += a[i];
    }
    average /= count;

    //calc s
    double s = 0;
    for(int i = 0; i < count; i++){
        s += (a[i] - average)*(a[i] - average);
    }
    s = sqrt(s/(count-1));

    int exceptions = 0;
    for(int i = 0; i < count; i++){
        if(a[i] < average-3*s || a[i] > average+3*s){
            exceptions++;
        }
    }

    printf("%.4f %d", s, exceptions);
}