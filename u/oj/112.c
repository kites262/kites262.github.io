#include <stdio.h>
#include <math.h>

int main(){
    double user;
    scanf("%lf", &user);

    double result;

    if(user >= 0){
        result = sqrt(user);
    }else{
        result = (user+1)*(user+1) + 2.0*user + 1.0/user;
    }

    printf("%.2f", result);
}