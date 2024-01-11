#include <stdio.h>

int main(){
    double mile;
    int minute;
    scanf("%lf %d", &mile, &minute);

    double money;

    if(mile <= 3) money = 10.0;
    else if(mile <= 10) money = 10.0 + (mile-3.0) * 2.0;
    else money = 10.0 + 14.0 + (mile-10.0) * 3.0;

    money += (minute/5)*2;

    printf("%.1f", money);
}