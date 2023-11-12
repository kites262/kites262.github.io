#include <stdio.h>
#include <math.h>

int main(){
    int user;
    scanf("%d", &user);

    double r = 0;
    for(int i = 1; i <= user; i++){
        r += sin(1.0/i);
    }

    printf("%.2f", r);
}